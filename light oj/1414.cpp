#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,y,s1,s2;
    int d1,d2,t,tc;
    cin>>tc;
    t=1;
    while(tc--){
        string a[2];
    cin>>a[0]>>x;
    getchar();
    cin>>s1;

    cin>>a[1]>>y;
    getchar();
    cin>>s2;
    if(a[0]=="January"||a[0]=="February")s1--;
    if(a[1]=="January"||(a[1]=="February"&& y<29))s2--;
    d2=s2/4-s2/100+s2/400;
    d1=s1/4-s1/100+s1/400;

    printf("Case %d: %d\n",t,d2-d1);
    t++;
}
    return 0;
}
