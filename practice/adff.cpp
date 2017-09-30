#include<bits/stdc++.h>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int dp[12][1000005];
const int M=1000000007;
int go(int p,int k,int n,int vl)
{
    //cout<<p<<" "<<vl<<endl;
    //getchar();
    if(p==n)return 1;
    if(dp[p][vl]!=-1)return dp[p][vl];
    dp[p][vl]=0;
    for(int i=1;i<=k;i++)
    if(vl==i||(vl%i!=0))dp[p][vl]+=go(p+1,k,n,i);
    return dp[p][vl]%M;
}
int main()
{
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    int ret=0;
    ret+=go(0,k,n,1);
    ret%=M;
    cout<<ret<<endl;
    return 0;
}
