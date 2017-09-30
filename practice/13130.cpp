#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tc,ks=1;
	 cin>>tc;
	 while(tc--)
	 {
	 int a[7];
	 int ch=1;
	   for(int i=0;i<5;i++)
	   {
	       cin>>a[i];
		   if(i)
		   {
		       if((a[i-1]+1)!=a[i])ch=0;
		   }
	   }

	    if(ch)cout<<"Y"<<endl;
		else cout<<"N"<<endl;

	 }


  return 0;
}

