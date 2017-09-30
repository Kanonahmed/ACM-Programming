#include<bits/stdc++.h>
using namespace std;
int prime[105], cnt[105];
int main(){
    for(int i=2; i<=100; i++)
        for(int j=2; j<i; j++)
            if(i%j==0) prime[i]=1;
    int tc; cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        memset(cnt, 0, sizeof cnt);
        int n; cin>>n;
        for(int i=2; i<=n; i++)
            for(int j=2; j<=i; j++)
                if(!prime[j] && i%j==0){
                    int tmp=i;
                    while(tmp%j==0){
                        cnt[j]++;
                        tmp/=j;
                    }
                }
        cout<<"Case "<<cs<<": "<<n<<" = ";
        int flag=0;
        for(int i=2; i<=100; i++)
            if(cnt[i]){
                if(flag) cout<<" * "<<i<<" ("<<cnt[i]<<")";
                else cout<<i<<" ("<<cnt[i]<<")", flag=1;
            }
        cout<<endl;
    }
}
