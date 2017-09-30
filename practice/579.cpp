#include<bits/stdc++.h>
using namespace std;
int main()
{
int h,m;
float anglem,angleh,angle;
while(scanf("%d:%d",&h,&m)){
    if(h==0&&m==0)
    break;
angleh=h*30+((float)m/60)*30;
anglem=m*6;
angle=abs(angleh-anglem);
if(angle>180)
angle=360-angle;
printf("%0.3f\n",angle);
}

    return 0;
}
