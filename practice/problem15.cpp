#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int line,i,j,l1,l2,k,flag,t,result[100];
    char a[100],b[100];
    cin>>line;
    getchar();
    while(line!=0)
    {
        scanf("%s %s",&a,&b);
        l1=strlen(a);
        l2=strlen(b);
        flag=0;
        t=0;
        for(i=0; i<l1; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                    result[t++]=a[i]-'0';
                    for(k=0; k<l2; k++)
                    {
                        if(a[i]==b[k])
                        {
                            b[k]='\0';
                        }
                    }
                }
            }
        }
        if(flag==0)
            printf("N");
        else
        {
            sort(result+0,result+t);
            for(i=0; i<t; i++)
                cout<<result[i];
        }
        line--;
        cout<<endl;

    }

    return 0;
}
