#include<bits/stdc++.h>
using namespace std;
vector<int>coin,num;
int c_num,r1;
int DP[51][1001];
const int mod=100000007;
int change(int i,int taka)
{
    if(i>=c_num)
    {
        if(taka==0)return 1;
        else return 0;
    }
    //int &pt=DP[i][taka];
    //if(pt!=-1)return pt;
   // pt=0;
   if(DP[i][taka]!=-1)return DP[i][taka];
      int r1=0;
      DP[i][taka]=0;
    for(int c=0; c<=num[i]; c++)
    {
        if(taka-coin[i]*c>=0)
       {
           r1=change(i+1,taka-coin[i]*c);
           DP[i][taka]=(DP[i][taka]%mod+r1%mod)%mod;
       }
    }
    //return pt;
    return DP[i][taka];
}

int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        coin.clear();
        num.clear();
        memset(DP,-1,sizeof DP);
        int n,amount;
        cin>>n>>amount;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            coin.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            num.push_back(x);
        }
        c_num=coin.size();
        cout<<"Case "<<t<<": "<<change(0,amount)<<endl;
        t++;
    }
    return 0;
}
