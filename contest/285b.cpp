#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<utility>
#include<string>
#include<cstring>
#include<cmath>
#define MPI map<int,int>
#define PRI pair<int,int>
#define VI vector<int>
#define STI stack<int>
#define QI queue<int>
#define PI 2*acos(0.0)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define ll long long
#define eps 1e-9
#define P 10000
template<class T> T SQR(T X)
{
    return X*X;
}
template<class T> T GCD(T a, T b)
{
    if(b==0)return a;
    else return GCD(b,a%b);
}
template<class T> T LCM(T a,T b)
{
    return (a*b)/(GCD(a,b));
}
template<class T> T MOD(T a,T b)
{
    if(a>0) return a%b;
    else return (a%b+b)%b;
}
template<class T> T BIGMOD(T b,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0) return (BIGMOD(b,p/2,m)%m*BIGMOD(b,p/2,m)%m)%m;
    else return ((b%m)*BIGMOD(b,p-1,m)%m)%m;
}
using namespace std;
const int N=10000;
int a[10010];
int main()
{
    pair<string ,string>s[1002];

    int q,n;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>s[i].first>>s[i].second;
    }

    int count=0;
    int flag;
    for(int i=0; i<q; i++)
    {
        if((s[i].first).compare(s[i].second)!=0&&a[i]==0)
        {

            for(int j=i+1; j<q; j++)
            {
                flag=0;
                if((s[i].second).compare(s[j].first)==0)
                {
                    if(flag==0)
                    {
                        s[i].second= s[j].second;
                        flag=1;
                    }
                    a[j]=1;
                    flag=1;
                }
            }
        }
    }
    count=0;
    for(int i=0; i<q; i++)
    {
        if(a[i]==0)count++;
    }
    cout<<count<<endl;
    for(int i=0; i<q; i++)
    {
        if(a[i]==0)
            cout<<s[i].first<<" "<<s[i].second<<endl;

    }

    return 0;
}
