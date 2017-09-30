#include<iostream>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

long long n;

int func(long long cur)
{
    if(cur>=n) return 0;

    int ret=0;
    ret= ret | !func(cur*2);
    ret= ret | !func(cur*9);
    return ret;
}

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int tc, kk=1;
    string s;
    while(cin>>n)
    {
        if(func(1))
            cout<<"Stan wins.\n";
        else cout<<"Ollie wins.\n";

    }
return 0;
}
