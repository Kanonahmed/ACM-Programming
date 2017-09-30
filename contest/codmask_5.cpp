#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tc,ks=1;
     cin>>tc;
     while(tc--)
     {
         int a[100005];
         int n;
         scanf("%d",&n);
         set<int>v;
         while(n--)
         {
             int x,y;
             scanf("%d %d",&x,&y);
             if(x==1)v.insert(y);
             else if(x==2)v.erase(y);
             else
             {
                 set<int>::iterator it;
                 for(it=v.begin();it!=v.end();it++)
                 {
                     if(it==v.begin())
                     {
                         if((*it)>1){cout<<"res= 1"<<endl;break;}
                     }
                     else
                     {
                         it--;
                         int s=*it;
                         it++;
                         it++;
                         int ss=*it;
                         if(ss-s>0){cout<<"res= "<<s+1<<endl;break;}
                     }
                 }
             }
         }
     }



    return 0;
}
