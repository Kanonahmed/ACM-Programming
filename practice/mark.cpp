#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int mark[]= {5,5,9,10,11,9,5};
    int mark_count[15];
    int i,j;
    for(i=0; i<15; i++)
    {
        mark_count[i]=0;
    }
    for(i=0; i<7; i++)
    {
        mark_count[mark[i]]++;

        for(j=0; j<15; j++)
        {
            printf("%d ",mark_count[j]);
        }
        printf("\n");
    }
    //printf("%d",mark_count[mark[0]]);
    return 0;
}
