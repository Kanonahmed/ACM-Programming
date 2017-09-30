#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[105],n,sum,p,k;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n-2; i++)
    {
        p=0;
        k=0;
        int j=0;
        while(j<n-1)
        {
            if(j+1==i)k=1;;
            sum=a[j+1+k]-a[j];
            if(sum>p)
            {
                p=sum;
            }
            j++;
            if(j==i)j++;
            k=0;
        }

    }
        cout<<p<<endl;



        return 0;
    }
