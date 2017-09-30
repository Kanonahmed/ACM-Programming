// next_permutation example
#include<bits/stdc++.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
using namespace std;
int main () {
  int myints[] = {1,2,3,4};

  sort (myints,myints+4);

  cout << "The 3! possible permutations with 3 elements:\n";
  do {
    for(int i=0;i<4;i++)
    cout<<myints[i]<<" ";
    puts(" ");
  } while ( next_permutation(myints,myints+4) );
//
//  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//  cout<<endl;
//  string s="abfg";
//  sort(s.begin(),s.end());
//  do
//  {
//      for(int i=0;i<s.size();i++)
//      cout<<s[i];
//      cout<<endl;
//  }while(next_permutation(s.begin(),s.end()));

  return 0;
}
