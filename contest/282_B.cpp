#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,count=0;
scanf("%d %d",&a,&b);
if(a==b)
printf("infinity\n");
else{
n=a-b;
int p=sqrt(n);
//cout<<n<<endl;
for(int i=1;i<=p;i++)
{
    if(n%i==0)
    {
        if(i>b)count++;
        if((n/i)>b&&n/i!=i)count++;
    }
}
printf("%d\n",count);
}



    return 0;
}
