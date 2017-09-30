#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j,k;
    cin>>n;
    while(n!=0)
    {
        cin>>m;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(i==1 || i==m)
                    printf("*");
                    else if(j==1 || j==m)
                    printf("*");
                    else
                    printf(" ");
            }
            cout<<endl;
        }

        n--;
    }

    return 0;
}
