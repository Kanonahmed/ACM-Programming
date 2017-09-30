#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int cnt=0;
      //n=n-1;
      for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)if(s[i]!=s[j])cnt++;
      if(cnt>k)cout<<"-1"<<endl;
      else
      {
            for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
            {
                int p=k-cnt;
                if(s[i]==s[j])
                {
                    if(p>=2&&s[i]!='9'){k-=2;s[i]='9';s[j]='9';}
                }
                else
                {
                    int h=cnt-1;
                    p=k-h;
                    char mx;
                    mx=max(s[i],s[j]);
                    if(mx=='9'){s[i]='9';s[j]='9';cnt--;k--;}
                    else if(p>=2){s[i]='9';s[j]='9';k-=2;cnt--;}
                    else {s[i]=mx;s[j]=mx;cnt--;k--;}
                }
            }
            if(n%2&&k>0)s[n/2]='9';
            cout<<s<<endl;
      }
     return 0;
}


