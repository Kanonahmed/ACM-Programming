#include<bits/stdc++.h>
using namespace std;
int n;
void pin(int i)
{
    if(i>n)return;
    if(i==0){cout<<"1 ";}
    else
    cout<<"+ x^"<<i<<" ";
    pin(i+1);
}
int main()
{
cin>>n;
pin(0);


    return 0;
}
