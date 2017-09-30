#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sq,dis;
    cin>>n;
    sq=sqrt(n);
    //sq=floor(sq);
    cout<<sq<<endl;
    dis=n-sq;
    int x,y;
    if(dis==0)
    {
        x=1;
        y=sq;
    }
    else if(dis<=sq+1)
    {
        x=dis;
        y=sq+1;
    }
    else
    {
        x=sq+1;
        y=abs(2*(sq+2)-dis);
    }

    cout<<x<<" "<<y<<endl;

}
