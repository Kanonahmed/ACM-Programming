#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   char aa[]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','.'};
    while(cin>>n){
        if(n==0)break;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        int sum;
        if(s[i]=='_')sum=27;
      else if(s[i]=='.')sum=28;
      else sum=s[i]-64;
       sum=sum+n;
       if(sum>28)
       {
           sum=sum-28;
       }
   cout<<aa[sum];
    }
    cout<<endl;
    }
    return 0;
}
