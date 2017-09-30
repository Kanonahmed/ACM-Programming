#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    char a[1000],b[10000];
    int i,j,l1,strt,word,n;
    cin>>n;
    getchar();
    while(n!=0)
    {
        strt=0;
        word=0;
        gets(a);
        l1=strlen(a);
        for(i=0; i<=l1; i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                if(strt==0)
                {
                    strt=1;
                }
            }
            else if(a[i]>='A'&&a[i]<='Z')
            {
                if(strt==0)
                {
                    strt=1;
                }
            }
            else if(a[i]>='0'&&a[i]<='9')
            {
                if(strt==0)
                {
                    strt=1;
                }
            }
            else
            {
                if(strt==1)
                {
                    strt=0;
                    word++;
                }
            }
        }
        cout<<word<<endl;
        n--;
    }
    return 0;
}
