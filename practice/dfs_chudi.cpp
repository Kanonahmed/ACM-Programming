#include<bits/stdc++.h>
using namespace std;
string s[9];
int go(int x,int y)
{
    if(x==0)return 0;
    int rep;
    if(x-1>=0&&s[x-1][y]=='.')
        rep=1+go(x-1,y);
    else return 1000;
    return rep;
}
int vo(int x,int y)
{
    if(x==7)return 0;
    int rep;
    if(x+1<8&&s[x+1][y]=='.')
        rep=1+vo(x+1,y);
    else return 1000;
    return rep;
}
int main()
{

    for(int i=0; i<8; i++)
        cin>>s[i];
    int best=1000,best1=1000;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if(s[i][j]=='W')
            {
                best=min(best,go(i,j));
            }
            else if(s[i][j]=='B')
            {
                best1=min(best1,vo(i,j));
            }
        }
    if(best<=best1)cout<<"A"<<endl;
    else cout<<"B"<<endl;

    return 0;
}
