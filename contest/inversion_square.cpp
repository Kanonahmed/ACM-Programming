#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[100005];
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
for(int i=0;i<100000;i++)cin>>arr[i];
 long long cnt=0;
 for(int i=0;i<100000;i++)
    for(int j=i+1;j<100000;j++)
       if(arr[i]>arr[j])cnt++;
        cout<<cnt<<endl;

    return 0;
}
