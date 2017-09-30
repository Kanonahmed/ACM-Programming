#include<bits/stdc++.h>
using namespace std;
vector<char>v;
int vis[100];
int gcd(int a,int b)
{
    //cout<<a<<" "<<b<<endl;
    if(a==0)return b;
      gcd(b%a,a);
}
int lp(int n)
{

}
void recurse ( int count ) // Each call gets its own count
{
  cout<< count <<"\n";
  // It is not necessary to increment count since each function's
  //  variables are separate (so each count will be initialized one greater)
  if(count==100)return ;
  recurse ( count + 1 );
}
void printnum ( int begin )
{
  cout<< begin;
  if ( begin < 9 )         // The base case is when begin is greater than 9
  {                           //  for it will not recurse after the if-statement
      printnum ( begin + 1 );
  }
  cout<< begin;         // Outputs the second begin, after the program has
                              //  gone through and output
}
int main()
{
  //cout<<lp(3);
  //int d=gcd(12,3);
  //recurse(3);
  //printnum(1);


    return 0;
}
