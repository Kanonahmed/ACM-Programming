#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {

        int a[100005];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        int ch=0;
        int cur_mx=a[0];
        int sum=0;
        int ans=a[0];
        if(a[0]>=0){sum+=a[0];ch=1;}
        //cout<<sum<<endl;
        for(int i=1;i<n;i++)
        {
            if(a[i]>=0){sum+=a[i];
            ch=1;}

            cur_mx=max(a[i],cur_mx+a[i]);
            ans=max(ans,cur_mx);

        }
        if(!ch)
        {
            sort(a,a+n);
            sum=a[n-1];
        }
      cout<<ans<<" "<<sum<<endl;

   }


    return 0;
}
