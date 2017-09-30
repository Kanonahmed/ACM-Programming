#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int line,i,j,l;
    char a[10000];
     cin>>line;
     getchar();
     while(line!=0)
     {
         gets(a);
         l=strlen(a);
         cout<<a[l]<<endl;
         if(a[l-1]=='0' ||a[l-1]=='2' || a[l-1]=='4' || a[l-1]=='6' || a[l-1]=='8')
         printf("even\n");
         else
         printf("odd\n");

         line--;
     }
    return 0;
}
