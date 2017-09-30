#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    char a[100];
    int l1,i,sum,n;
    cin>>n;
    getchar();
    while(n!=0)
    {
        gets(a);
        l1=strlen(a);
        sum=0;
        for(i=0; i<l1; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
        n--;
    }

    return 0;
}
