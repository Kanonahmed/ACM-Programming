#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    char a[1000],b[1000];
    int i,j,k,l1,l2,count,flag;
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    flag=0;
    count=0;
    for(i=0; i<=l1-l2; i++)
    {
        j=i;
        k=0;
        while(k<l2)
        {
            if(a[j]==b[k])
            {
                j++;
                k++;
            }
            else
            {
                k=0;
                break;
            }
        }

        if(k==l2)
        {
            flag=1;
            count++;
        }
    }
    if(flag==1)
    {
//        printf("yes\n");
        printf("%d\n",count);
    }
    else
    printf("no\n");


    return 0;
}
