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
    int number,line;
    cin>>line;
    while(line!=0)
    {
        cin>>number;
        if(number%2==0)
        {
            printf("red\n");
        }
        else printf("blue\n");
        line--;
    }

    return 0;
}
