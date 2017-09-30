//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<deque>
#include<vector>
using namespace std;
const int N=1000005;
int a[N+5];
int main()
{
    int n,k;
    deque<int>dm,dx;
    vector<int>vm,vx;
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++){
        scanf("%d",&a[i]);
        while(!dm.empty()&&a[i]<=a[dm.front()])dm.pop_front();
        while(!dx.empty()&&a[i]>=a[dx.front()])dx.pop_front();
        while(!dm.empty()&&dm.back()<=(i-k))dm.pop_back();
        while(!dx.empty()&&dx.back()<=(i-k))dx.pop_back();
        dm.push_front(i);
        dx.push_front(i);
         if(i>=k)
         {
           vm.push_back(a[dm.back()]);
           vx.push_back(a[dx.back()]);
         }
        }
        for(int i=0;i<vm.size();i++)printf("%d ",vm[i]);puts(" ");
        for(int i=0;i<vx.size();i++)printf("%d ",vx[i]);puts(" ");
    return 0;
}
