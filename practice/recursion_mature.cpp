#include<bits/stdc++.h>
using namespace std;
void go(int u)
{
    //printf("%d ",u);
    if(u==0)return;
   // printf("%d ",u%2);
   for(int i=0;i<2;i++)
    go(u/2);
    //go(u/2);  for loop diye call kora r avabe function lekha akoi kotha
    printf("%d ",u%2);
}
int main()
{
    int n;
    cin>>n;
    go(n);


    return 0;
}
