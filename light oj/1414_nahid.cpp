#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int cs=0; cs<tc; cs++){
        string m1, m2;
        int d1, d2, y1, y2;
        cin>>m1>>d1;
        getchar();
        cin>>y1;
        cin>>m2>>d2;
        getchar();
        cin>>y2;
        if(m1=="January" || m1=="February") y1--;
        if(m2=="January" || (m2=="February" && d2<29)) y2--;
        int left=y1/4-y1/100+y1/400;
        int right=y2/4-y2/100+y2/400;
        printf("Case %d: %d\n", cs+1, right-left);
    }
    return 0;
}
