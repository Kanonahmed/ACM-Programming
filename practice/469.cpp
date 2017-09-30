#include<bits/stdc++.h>
using namespace std;
string store[105];
int vis[105][105];
int n,m,cnt;
void fill(int r,int c)
{
    if(r<n&&r>=0&&c<m&&c>=0)
    {
        if(store[r][c]=='W'&&vis[r][c]!=1)
        {
            vis[r][c]=1;
            cnt++;
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

int rr,cc;

void fun(string str)
{
    int i;
    rr=0,cc=0;
    for(i=0; str[i]!=' '; i++)
    {
        rr=(rr*10 + str[i]-'0' );
    }

    for(; str[i]==' '; i++);

    for( ; str[i]!=' ' && str[i]; i++)
    {
        cc=(cc*10 + str[i]-'0' );
    }

    //cout<<rr<<":rr "<<cc<<" cc\n";

}

int main()
{
    int tc,t,flag,tlag,ll;
    string str;
    cin>>tc;
    getchar();
    getchar();
    while(tc--)
    {

        n=0;
        ll=0;
        flag=0;


        while( getline(cin,str) )
        {
            int x=str.length();

            if(str[0]-'0'>=0 && str[0]-'0'<=9  )break;

            store[n]=str;
            m=x;
            n++;

        }

//        fun(str);
        goto xx;


        while(getline(cin,str) )
        {
            xx:
            if( str.length()==0)break;
            fun(str);
            cnt=0;
            memset(vis,0,sizeof vis);
            fill(rr-1,cc-1);
            cout<<cnt<<endl;
        }
        //memset(store,'\0',sizeof store);
        memset(vis,0,sizeof vis);
    }

    return 0;
}
/*
1

LLLLLLLLL
LLWWLLWLL

LWWLLLLLL
LWWWLWWLL
LLLWWWLLL
LLLLLLLLL
LLLWWLLWL
LLWLWLLLL
LLLLLLLLL
*/
