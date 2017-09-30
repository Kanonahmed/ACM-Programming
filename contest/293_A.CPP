#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[9];
    int sum=0,ss=0;
    for(int i=0; i<8; i++)
    {
        cin>>s[i];
        for(int j=0; j<8; j++)
        {
            if(s[i][j]=='Q')
                sum+=9;
            if(s[i][j]=='R')
                sum+=5;
            if(s[i][j]=='B')
                sum+=3;
            if(s[i][j]=='N')
                sum+=3;
            if(s[i][j]=='P')
                sum+=1;
            if(s[i][j]=='q')
                ss+=9;
            if(s[i][j]=='r')
                ss+=5;
            if(s[i][j]=='b')
                ss+=3;
            if(s[i][j]=='n')
                ss+=3;
            if(s[i][j]=='p')
                ss+=1;
        }
    }
    if(sum>ss)cout<<"White"<<endl;
    else if(sum<ss)cout<<"Black"<<endl;
    else  cout<<"Draw"<<endl;
    return 0;
}
