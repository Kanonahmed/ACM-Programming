#include<bits/stdc++.h>
using namespace std;
long long sum=0;
pair<long long,long long>a[200002];
long long n,r,avg,temp;
int main()
{
cin>>n>>r>>avg;
for(int i=0;i<n;i++)
{
    cin>>a[i].second>>a[i].first;
    sum+=a[i].second;
}
sort(a,a+n);
//for(int j=0;j<n;j++)
//cout<<a[j].second<<" "<<a[j].first<<endl;
//cout<<sum;
int k=0;
long long res=0;
while(sum<avg*n)
{
     temp=min(avg*n-sum,r-a[k].second);
     sum+=temp;
    res+=temp*(a[k].first);
    k++;
}
cout<<res<<endl;
    return 0;
}
