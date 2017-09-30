#include<bits/stdc++.h>
using namespace std;
int col,row,cnt;
int vis[22][22];
string s[22];
void flood(int r,int c)
{
    if(r>=0&&r<row&&c>=0&&c<col&&vis[r][c]!=1&&s[r][c]!='#')
    {
        cnt++;
        vis[r][c]=1;
        flood(r+1,c);
        flood(r-1,c);
        flood(r,c+1);
        flood(r,c-1);
    }
    else return ;
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        int r,c,flag=0;
        cin>>col>>row;
        for(int i=0; i<row; i++)
        {
            cin>>s[i];
            if(flag==0)
            {
                for(int j=0; j<col; j++)
                    if(s[i][j]=='@')
                    {
                        r=i;
                        c=j;
                        flag=1;
                        break;
                    }
            }
        }
        cnt=0;
        flood(r,c);
        cout<<"Case "<<t<<": "<<cnt<<endl;
        for(int i=0;i<22;i++)s[i].clear();
        memset(vis,0,sizeof vis);
        t++;
    }



    return 0;
}
