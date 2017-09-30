#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
     int tc,ks=1;
	 cin>>tc;
	 while(tc--)
	 {
	     int n,k;
		 scanf("%d %d",&n,&k);
		 int q=sqrt(n);
		 LL sum=0;
		 for(int i=1;i<=q;i++)
		 {
		    if(n%i==0)
			{
			   if(i%k)sum+=(LL)i;

			  if(i!=(n/i))
			  {
			     int p=n/i;
				 if(p%k)sum+=(LL)p;
			  }

			}


		 }

		 printf("%lld\n",sum);

	 }


  return 0;
}


