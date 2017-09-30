#include<bits/stdc++.h>
using namespace std;
int main()
{
    double vp,vd,t,f,d;
    cin>>vp>>vd>>t>>f>>d;
    if(vp>=vd){cout<<"0"<<endl;return 0;}
    if((vp*t)>=d)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int h=0;
    while(1)
    {
        double tp=(t*vp)/(vd-vp);
        double st=(tp+t)*vp;
        if(st==d)
        {
            cout<<h<<endl;
            return 0;
        }
        if(st>d)
        {
            cout<<h<<endl;
            return 0;
        }
        h++;
        t=tp+(tp+t)+f;
    }


    return 0;
}
