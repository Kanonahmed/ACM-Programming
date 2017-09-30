#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
            LL x;
            cin>>x;
            if(x==0LL)
            {
                cout<<"Case "<<ks++<<": Impossible"<<endl;
                continue;
            }
            x+=360LL;
            if(x%180LL)
            {
                cout<<"Case "<<ks++<<": Impossible"<<endl;
            }
            else
            {
                LL n=x/180LL;
                LL angle=180LL-(360LL/n);
                cout<<"Case "<<ks++<<": "<<n<<" "<<angle<<endl;
            }

   }


    return 0;
}
