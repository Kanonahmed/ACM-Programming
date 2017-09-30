#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<utility>   /// use for pair
#include<string>
#include<cstring>
#include<cmath>
#define PI 2*acos(0.0)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define eps 1e-9
#define P 10000
using namespace std;    /// sort(a,a+n) array sort, sort(s.begin(),s.end()),sort(v.begin(),v.end())
typedef long long ll;   /// s.substr(psitn,psitn), s.length(),s.compare(s1)==0 then equal,swap(v1,v2)
typedef vector<int> VI;
typedef map<int,int> MPI;
typedef pair<int,int> PRI;
typedef stack<int> STI;
const int N=10000;
int main()
{
    int a,b,c,sum=0,pum=0,dum,dif;
    cin>>a>>b>>c;
    if(b>=c)
    {
        dif=b-c;
        if(a>=dif)
        {
          a=a-dif;
          b=b-dif;
          sum+=dif;
          if(a%2==0)
          {
              b=b-a/2;
              sum+=a/2;
              c=c-a/2;
              pum=a/2;
              a=a-a/2-a/2;
              if(a==0&&b>=0&&b==c)
              cout<<sum<<" "<<b<<" "<<pum<<endl;
              else cout<<"Impossible"<<endl;
          }
          else
          cout<<"Impossible"<<endl;
        }
        else
        cout<<"Impossible"<<endl;
    }


else if(c>=b)
    {
        dif=c-b;
        if(a>=dif)
        {
          a=a-dif;
          c=c-dif;
          pum+=dif;
          if(a%2==0)
          {
              c=c-a/2;
              pum+=a/2;
              b=b-a/2;
              sum=a/2;
              a=a-a/2-a/2;
              if(a==0&&c>=0&&b==c)
              cout<<sum<<" "<<c<<" "<<pum<<endl;
              else cout<<"Impossible"<<endl;
          }
          else
          cout<<"Impossible"<<endl;
        }
        else
        cout<<"Impossible"<<endl;
    }
    else
    cout<<"Impossible"<<endl;




    return 0;
}

