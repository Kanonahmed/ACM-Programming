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
    string a;
    int i,j,sum,flag,line;
    cin>>line;
    getchar();
    while(line!=0){
    getline(cin,a);
    sum=0;
    flag=0;
    for(i=0; i<a.size(); i++)
    {
        if(a[i]=='1')
        {
            sum++;
        }
        else
        {
            sum--;
        }

        if(sum<0)
        {
            flag=1;
            break;
        }
        else flag=0;
    }
    if(flag==1)
        printf("MAGIC\n");
    else printf("NORMAL\n");
    line--;
    }

    return 0;
}
