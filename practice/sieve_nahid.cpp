#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int status[N+5], prime[N+5], p;

void sieve()
{
    status[0]=status[1]=1;
    for(int i=2; i<=N; i++)
        if(!status[i])
        {
            prime[p++]=i;
            for(int j=i+i; j<=N; j+=i)
                status[j]=1;
        }
}

int main()
{
//    sieve();
//    cout<<p<<endl;
    cout << __gcd(0, 12) << endl;
}
