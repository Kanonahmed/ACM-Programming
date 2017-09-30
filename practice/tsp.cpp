#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;

struct City {
    int x, y;
    City() {}
    City(int _x, int _y) {
        x = _x, y = _y;
    }
    void print() {
        cout << x << " -> " << y << endl;
    }
    double distanceTo(City city) {
        int xx = x - city.x;
        int yy = y - city.y;
        return sqrt(xx * xx + yy * yy);
    }
} cities[MAX];

struct Tour {
    int cityIndex[MAX], tourSize;
    double fitness, distance;
    Tour() {}
    Tour(int noOfCities) {
        tourSize = noOfCities;
        fitness = distance = 0;
        for (int i = 0; i < tourSize; i++)
            cityIndex[i] = i;
    }
    void randomTour() {
        for (int i = 0; i < tourSize; i++) {
            int j = rand() % tourSize;
            swap(this->cityIndex[i], this->cityIndex[j]);
        }
    }
    double getFitness() {
        if (fitness == 0) return fitness = 1.0 / getDistance();
        return fitness;
    }
    double getDistance() {
        if (distance == 0) {
            for (int cityId = 0; cityId < tourSize; cityId++) {
                City fromCity = cities[cityIndex[cityId]];
                City destinationCity;
                if (cityId + 1 < tourSize)
                    destinationCity = cities[cityIndex[cityId + 1]];
                else destinationCity = cities[cityIndex[0]];
                distance += fromCity.distanceTo(destinationCity);
            }
        }
        return distance;
    }
    void printTour() {
        for (int i = 0; i < tourSize; i++)
            cout << this->cityIndex[i] << " ";
        cout << endl;
    }
};

struct Population {
    Tour tours[MAX];
    int populationSize;
    Population() {}
    Population(int noOfPopulation, int noOfCities) {
        populationSize = noOfPopulation;
        for (int i = 0; i < populationSize; i++) {
            Tour newTour = Tour(noOfCities);
            newTour.randomTour();
            tours[i] = newTour;
        }
    }
    void printPopulation() {
        for (int i = 0; i < populationSize; i++)
            this->tours[i].printTour();
    }
    Tour getFittest() {
        Tour fittest = tours[0];
        for (int i = 0; i < populationSize; i++) {
            if (tours[i].getFitness() > fittest.getFitness())
                fittest = tours[i];
        }
        return fittest;
    }
};

Population GeneticAlgo (Population newPop) {
    double sum = 0.0;
    for (int i = 0; i < newPop.populationSize; i++) {
        sum += 1000000 * newPop.tours[i].getFitness();
    }
    int parent1 = -1, parent2 = -1;
    while (parent1 == -1 || parent2 == -1) {
        int randProbability = rand() % (int)(sum + 1);
        double curProbability = 0;
        for (int i = 0; i < newPop.populationSize; i++) {
            curProbability += 1000000 * newPop.tours[i].fitness;
            if (curProbability >= randProbability) {
                if (parent1 == -1) parent1 = i;
                else if (parent1 != i)parent2 = i;
            }
        }
    }
    bool notCrossed1 = true;
    bool notCrossed2 = true;
    Tour temp1 = Tour(newPop.tours[parent1].tourSize);
    Tour temp2 = Tour(newPop.tours[parent1].tourSize);
    while (notCrossed1) {
        int mid = rand() % newPop.tours[parent1].tourSize;
        set<int>ncities;
        for (int i = 0; i < mid; i++) ncities.insert(newPop.tours[parent1].cityIndex[i]);
        for (int i = mid; i < newPop.tours[parent1].tourSize; i++) ncities.insert(newPop.tours[parent2].cityIndex[i]);
        if (ncities.size() == newPop.tours[parent1].tourSize) {
            notCrossed1 = false;
            for (int i = 0; i < mid; i++) temp1.cityIndex[i] = newPop.tours[parent1].cityIndex[i];
            for (int i = mid; i < newPop.tours[parent1].tourSize; i++) temp1.cityIndex[i] = newPop.tours[parent2].cityIndex[i];
        }
    }
    while (notCrossed2) {
        int mid = rand() % newPop.tours[parent1].tourSize;
        set<int>ncities;
        for (int i = 0; i < mid; i++) ncities.insert(newPop.tours[parent2].cityIndex[i]);
        for (int i = mid; i < newPop.tours[parent1].tourSize; i++) ncities.insert(newPop.tours[parent1].cityIndex[i]);
        if (ncities.size() == newPop.tours[parent1].tourSize) {
            notCrossed2 = false;
            for (int i = 0; i < mid; i++) temp2.cityIndex[i] = newPop.tours[parent2].cityIndex[i];
            for (int i = mid; i < newPop.tours[parent1].tourSize; i++) temp2.cityIndex[i] = newPop.tours[parent1].cityIndex[i];
        }
    }
    for (int i = 0; i < newPop.tours[parent1].tourSize; i++) {
        int j = rand() % newPop.tours[parent1].tourSize;
        swap(temp1.cityIndex[i], temp1.cityIndex[j]);
        swap(temp2.cityIndex[i], temp2.cityIndex[j]);
    }
    if (temp1.getFitness() > newPop.tours[parent1].getFitness()) swap(newPop.tours[parent1], temp1);
    if (temp2.getFitness() > newPop.tours[parent2].getFitness()) swap(newPop.tours[parent2], temp2);
    return newPop;
}

int main() {
    int noOfCities;
    cout << "How many city will you visit - ";
    cin >> noOfCities;
    cout << "The cities are:" << endl;
    for (int i = 0; i < noOfCities; i++) {
        int x, y;
        cin >> x >> y;
        cities[i] = City(x, y);
    }
    Population newPopulation = Population(50, noOfCities);
    double iniDist = newPopulation.getFittest().getDistance();
    cout << "Initial distance: " << iniDist << endl;
    for (int generation = 1; generation <= 10000; generation++) {
        newPopulation = GeneticAlgo(newPopulation);
    }
    double finalDist = newPopulation.getFittest().getDistance();
    cout << "Final distance: " << finalDist << endl;
    cout << "Optimization: " << 100 * (iniDist - finalDist) / iniDist << "%" << endl;
    return 0;
}
