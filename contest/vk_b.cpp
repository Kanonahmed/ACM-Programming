#include<bits/stdc++.h>
using namespace std;
int a[100005];
int vis[100005];
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int i,j,cnt=0;
    for(i=0,j=n-1;i<n,j>=0;)
    {
        if(vis[i]||vis[j])break;
        if(a[j]==4){vis[j]=1;cnt++;j--;}
        else
        {
           int sum=a[j];
            vis[j]=1;
            sum+=a[i];
            j--;
            while(sum<=4&&i<n)
            {
                vis[i]=1;
                i++;
                sum+=a[i];
            }
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
