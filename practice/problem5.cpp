#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,mark,mx,mn,i,j,arr[100];
    cin>>n;
    while(n!=0)
    {
        for(i=0; i<5; i++)
            cin>>arr[i];
        mx=arr[0];
        for(i=1; i<5; i++)
        {
            if(arr[i]>mx)
                mx=arr[i];
        }
        mn=arr[0];
        for(i=1; i<5; i++)
        {
            if(arr[i]<mn)
                mn=arr[i];
        }
        cout<<mx<<" "<<mn<<endl;
        n--;
    }
    return 0;
}
