#include<bits/stdc++.h>
using namespace std;
int sx,sy;
int sfx,sfy,ssx,ssy;
int go(int x,int y,int fx,int fy,int sx,int sy)
{
     if(x>=fx&&y>=fy)
     {
         int bakiX=x-fx;
         int bakiY=y;
         if(bakiX>=sx&&bakiY>=sy)return 1;
         if(bakiX>=sy&&bakiY>=sx)return 1;

         bakiX=x;
         bakiY=y-fy;
         if(bakiX>=sx&&bakiY>=sy)return 1;
         if(bakiX>=sy&&bakiY>=sx)return 1;
     }
     swap(x,y);
      if(x>=fx&&y>=fy)
     {
         int bakiX=x-fx;
         int bakiY=y;
         if(bakiX>=sx&&bakiY>=sy)return 1;
         if(bakiX>=sy&&bakiY>=sx)return 1;

         bakiX=x;
         bakiY=y-fy;
         if(bakiX>=sx&&bakiY>=sy)return 1;
         if(bakiX>=sy&&bakiY>=sx)return 1;
     }
     return 0;
}
int main()
{
    cin>>sx>>sy>>sfx>>sfy>>ssx>>ssy;
    if(go(sx,sy,sfx,sfy,ssx,ssy))
    {
        cout<<"YES"<<endl;return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
