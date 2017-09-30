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
using namespace std;
template<class T> T SQR(T X)
{
    return X*X;
}
const int N=10000;
int main()
{

    int n,t,a[30009],flag=0;
    cin>>n>>t;
    for(int i=1; i<n; i++)
        cin>>a[i];
    int i=1;
    while(i<=t)
    {
        if(i==t)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        i=i+a[i];
     }
if(flag==0)
cout<<"NO"<<endl;

    return 0;
}

