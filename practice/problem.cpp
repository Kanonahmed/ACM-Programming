#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define N 10000000
int a[N];
int b[N],l,q;
void prime()
{
    //int q;
    q=sqrt(N);
    a[2]=0;
    for(int i=4; i<=N; i+=2)
    {
        a[i]=1;
    }
    for(int j=3; j<=q; j+=2)
    {
        if(a[j]==0)
        {
            for(int k=j*j; k<=N; k+=j)
            {
                a[k]=1;
            }

        }
    }
   // l=0;
//    for(int i=2; i<=N; i++)
//    {
//        if(a[i]==0)
//        {
//            b[l]=i;
//            l++;
//        }
//    }

}
int main()
{
    prime();
    int n;
    cin>>n;
    for(int i=2;i<=N;i++)
    {
        if(a[i]==1&&a[n-i]==1)
        {printf("%d %d",i,n-i);break;}

    }


    return 0;
}
