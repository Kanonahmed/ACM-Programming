#include<bits/stdc++.h>
#define LL long long
using namespace std;
int prm[10003];
bool vis[10003];
int k;
void seive()
{
   k=1;
   prm[0]=2;
   for(int i=3;i<=10002;i+=2)
   {
      if(!vis[i])
	  {
	    prm[k++]=i;
		for(int j=2*i;j<=10002;j+=i)vis[j]=1;
	  }

   }


}
int main()
{
     seive();
     int tc,ks=1;
	 cin>>tc;
	 while(tc--)
	 {
	    int n;
		scanf("%d",&n);
		 LL cp=(LL)n;
		 if(n==1)cp=0;
		 vector<int>v;

		for(int i=0;prm[i]<=sqrt(n)&&i<k;i++)
		{
		   if(n%prm[i]==0)
		   {
		      v.push_back(prm[i]);
			  while(n%prm[i]==0)n/=prm[i];
		   }

		}

		if(n>1)v.push_back(n);


		for(int i=0;i<v.size();i++)
		{
		   cp=(cp*(v[i]-1))/(LL)v[i];
		}

		printf("%lld\n",cp);

	 }


  return 0;
}

