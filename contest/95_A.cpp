#include<bits/stdc++.h>
using namespace std;
#define xx              first
#define yy              second
#define pb              push_back;
#define mp              make_pair
#define LL              long long
#define PI              acos(-1.0)
#define meminf(B)       memset(B,126,sizeof B)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))

template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

/*    ----------------------------------------
     |    Scratch where itches----KANON       |
      ----------------------------------------   */

int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
/*
int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
*/
const double eps=1e-6;
int main()
{
   string s;
   cin>>s;
   int cnt=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]>='A'&&s[i]<='Z')cnt++;
   }
  if(cnt==s.size())
  {
      for(int i=0;i<s.size();i++)
        {
            s[i]=s[i]+32;
            cout<<s[i];

        }
        cout<<endl;
  }
  else if(cnt==s.size()-1&&s[0]>='a'&&s[0]<='z')
  {
      s[0]=s[0]-32;
      cout<<s[0];
      for(int i=1;i<s.size();i++)
      {
          s[i]=s[i]+32;
          cout<<s[i];
      }
      cout<<endl;
  }
  else
    cout<<s<<endl;



    return 0;
}

