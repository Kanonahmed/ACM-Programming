#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int x[100000000];
int y[100000000];
int z[100000000];
int main()
{
    string a;
    char c1,c2,c3;
    int tc,t=1;
    cin>>tc;
    getchar();
    while(tc)
    {
        getline(cin,a);
        scanf("%c %c %c",&c1,&c2,&c3);
        getchar();
        int f=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==c1)
                x[i]=++f;
            else
                x[i]=f;

        }
        int l=0;
        for(int j=a.size()-1; j>=0; j--)
        {
            if(a[j]==c3)
            {
                z[j]=++l;
            }
            else
                z[j]=l;
        }
        int count;
        int sum=0;
        for(int i=0; i<a.size(); i++)
        {
            cout<<x[i]<<" "<<z[i]<<endl;
        }
        for(int k=1; k<a.size()-1 ; k++)
        {
            if(a[k]==c2)
            {
                count=x[k-1]*z[k+1];
                sum+=count;
            }

        }
        printf("Case %d: %d\n",t,sum);
        t++;
        tc--;
    }
    return 0;
}
