#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
       int n;
       scanf("%d",&n);
       vector<int>vg,vb,vu;
       for(int i=0;i<n;i++)
       {
           int x;
           char a[10];
           scanf("%d",&x);
           scanf("%s",&a);
           if(a[0]=='G')vg.push_back(x);
           if(a[0]=='B')vb.push_back(x);
           if(a[0]=='U')vu.push_back(x);
       }
       //cout<<vg.size()<<" "<<vb.size()<<" "<<vu.size()<<endl;
       if(vg.size()==vb.size()&&vb.size()==vu.size())
       {   int res=0;
           sort(vg.begin(),vg.end());
           sort(vb.begin(),vb.end());
         for(int i=0;i<vg.size();i++)
            //cout<<vg[i]<<" "<<vb[i]<<endl;
           for(int i=0;i<vg.size();i++)
           if(vg[i]>vb[i]){res=1;break;}
              //cout<<res<<endl;
           if(!res)printf("Case %d: GBU\n",ks++);
           else printf("Case %d: Undefined\n",ks++);
       }
       else printf("Case %d: Undefined\n",ks++);
   }


    return 0;
}
