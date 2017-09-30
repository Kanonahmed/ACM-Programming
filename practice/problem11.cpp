#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int line,i,j,l1;
    char a[100];
    cin>>line;
    getchar();
    while(line!=0)
    {
        gets(a);
        l1=strlen(a);
        for(i=0;i<=l1;i++)
        {
            if(a[i]=='L')
            a[i]=a[i-1];
            if(a[i]=='R')
            a[i]=a[i+1];
        }
        for(i=0;i<=l1;i++)
        cout<<a[i];
        cout<<endl;

        line--;
    }

    return 0;
}
