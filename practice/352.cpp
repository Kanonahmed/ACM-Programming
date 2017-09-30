#include<bits/stdc++.h>
using namespace std;
int vis[105][105];
char store[105][105];
int row;
void fill(int r,int c)
{
    if(r<row&&r>=0&&c<row&&c>=0)
    {
        if(store[r][c]=='1'&&vis[r][c]!=1)
        {
            vis[r][c]=1;
            fill(r+1,c);
            fill(r-1,c);
            fill(r,c+1);
            fill(r,c-1);
            fill(r-1,c-1);
            fill(r-1,c+1);
            fill(r+1,c-1);
            fill(r+1,c+1);
        }
    }
    else return ;
}
int main()
{
    int t=1;
    while(cin>>row)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<row; j++)
                cin>>store[i][j];
        }
        int count=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<row; j++)
            {
                if(store[i][j]=='1'&&vis[i][j]!=1)
                {
                    count++;
                    fill(i,j);
                }
            }
        }
        //cout<<count<<endl;
        cout<<"Image number "<<t<<" contains "<<count<<" war eagles."<<endl;
        memset(vis,0,sizeof vis);
        memset(store,'\0',sizeof store);
            t++;
        }
            return 0;
        }
