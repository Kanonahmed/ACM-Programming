#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i;
cin>>n;
int res =sqrt(n);
for(i=1;i<=res;i++){
    if(res%i==0)
    {
        cout<<i<<endl;
    }
}
   cout<<sum<<endl;
return 0;
}

