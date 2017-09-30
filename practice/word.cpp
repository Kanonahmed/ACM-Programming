#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char arr[100];
    int i,l,count=0,word_strt=0;
    gets(arr);
    l=strlen(arr);
    for(i=0; i<=l; i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
        {
            if(word_strt==0)
            {
                word_strt=1;
                printf("%c",arr[i]);
            }
            else printf("%c",arr[i]);
        }
        else if(arr[i]>='a'&&arr[i]<='z')
        {
            if(word_strt==0)
            {
                word_strt=1;
                arr[i]='A'+arr[i]-'a';
                printf("%c",arr[i]);
            }
            else printf("%c",arr[i]);
        }
        else if(arr[i]>='0'&&arr[i]<='9')
        {
            if(word_strt==0)
            {
                word_strt=1;
                printf("%c",arr[i]);
            }

            else
                printf("%c",arr[i]);

        }
        else
        {

            if(word_strt==1)
            {
                word_strt=0;
                printf("\n");
                count++;

            }
        }
    }
    printf("how many word=%d",count);

    return 0;
}
