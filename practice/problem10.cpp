#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    char a[100];
    int i,j,count,line,len,flag;
    cin>>line;
    getchar();
    while(line!=0)
    {
        flag=0;
        gets(a);
        len=strlen(a);
        for(i=0; i<len; i++)
        {
            if(a[i]!='0')
            {
                count=0;
                for(j=i; j<len; j++)
                {
                    count++;
                    flag=1;
                }
                break;
            }
        }

        if(flag==0)
            printf("1\n");
        else printf("%d\n",count);


        line--;
    }

    return 0;
}
