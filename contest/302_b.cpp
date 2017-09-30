#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int s=n/2;
    int ss=(n+1)/2;
    int sum=s*(n/2)+ss*(n-n/2);
    if(sum<k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    int l=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=n; j++)
            {
                if(l<k)
                {
                    if(j%2!=0){cout<<"L";l++;}
                    else cout<<"S";
                }
                else cout<<"S";
            }
        }
        else
        {
            for(int j=1; j<=n; j++)
            {
                if(l<k)
                {
                    if(j%2==0){cout<<"L";l++;}
                    else cout<<"S";

                }
                else cout<<"S";
            }
        }
        cout<<endl;
    }
    //cout<<sum<<endl;
    return 0;
}
