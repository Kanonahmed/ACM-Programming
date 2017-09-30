#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{

     int tc,ks=1;
	 cin>>tc;
	 while(tc--)
	 {
	     int sum;
		 scanf("%d",&sum);


		     LL lo=0,hi=100000000;
			 LL ans=-1;
			 while(lo<=hi)
			 {
			    LL md=(lo+hi)/2LL;
				LL p=(md*(md+1LL))/2LL;
				if(p==(LL)sum){ans=md-1LL;break;}
				else if(p>(LL)sum)hi=md-1LL;
				else lo=md+1LL;

			 }


				   if(ans!=-1)printf("%lld\n",ans);
				   else printf("No solution\n");

	 }

    return 0;
}
