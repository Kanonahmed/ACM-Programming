#include<bits/stdc++.h>
using namespace std;
double digit[1000005];
int main()
{
    int tc,t=1;
    digit[0]=0.0;
    for(int i=1;i<=1000000;i++)digit[i]=digit[i-1]+log10(i);
    cin>>tc;
    while(tc--)
    {
      int a,b;
      cin>>a>>b;
      int res=ceil(digit[a]/log10(b));
      if(a==0||a==1)res=1;
      cout<<"Case "<<t++<<": "<<res<<endl;
    }

    return 0;
}
