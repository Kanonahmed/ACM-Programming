#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v1,v2;
    cin>>v1>>v2;
    double t,d,sum=v1+v2;
    cin>>t>>d;
    for(int i=1;i<t-1;i++)
    {
        if(v1<v2){v1+=d;sum+=v1;}
        else{ v2+=d;sum+=v2;}
    }
    cout<<sum<<endl;
}
