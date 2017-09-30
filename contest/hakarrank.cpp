#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int s=0,s1=0;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            s+=x;
            s1+=y;
        }
      if(s>s1)cout<<"Sahil"<<endl;
      else if(s<s1)cout<<"Rosesh"<<endl;
      else cout<<"Draw"<<endl;
    }


    return 0;
}
