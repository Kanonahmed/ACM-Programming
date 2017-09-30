#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define LMT 10000
 int flag[MAX>>6];
#define ifc(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>6]|=(1<<((n>>1)&31)))
vector<int>vp;
void sieve() {
    unsigned i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!ifc(i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                isc(j);

                vp.push_back(2);
                for(int l=3;l<=MAX;l+=2)if(!ifc(l))vp.push_back(l);
}
int main()
{
   sieve();
   for(int i=0;i<vp.size();i++)cout<<vp[i]<<endl;
    return 0;
}
