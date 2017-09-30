#include<bits/stdc++.h>
using namespace std;
//const int  N=100000003;
#define N 10000000
long long a[1000];
int i;
void fabonaci()
{
    long long  a=0,b=1;
    long long sum=0;
    //int i=0;
    sum=0;
    while(sum<=N)
    {
        sum= a + b;
        a[i] = sum;
        a=b;
        b=sum;
        i++;
    }

}

int main()
{



    return 0;
}
