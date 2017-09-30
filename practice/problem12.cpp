#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int num,i,line;
    cin>>line;
    while(line!=0)
    {
        cin>>num;
        if(num%2==0)
        printf("even\n");
        else
        printf("odd\n");

        line--;
    }

    return 0;
}
