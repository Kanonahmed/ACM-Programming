#include<bits/stdc++.h>
using namespace std;
char s[1005][1005];
char lan[1005];
int vis[1005][1005],h,w,l;
int store[1005];
void fill(int row,int col)
{
    if(row<h&&row>=0&&col<w&&col>=0)
    {
        if(vis[row][col]==0&&lan[l]==s[row][col])
        {
            vis[row][col]=1;

            fill(row+1,col);
            fill(row-1,col);
            fill(row,col+1);
            fill(row,col-1);
        }
    }
    else return ;

}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        int count;
        map<char,int>mp;
        pair<int,char>pp[1005];
        int k=0;
        scanf("%d %d",&h,&w);
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
                cin>>s[i][j];
            for(int j=0; j<w; j++)
            {
                if(mp.find(s[i][j])==mp.end())
                {
                    mp[s[i][j]]=k;
                    lan[k]=s[i][j];
                    k++;
                }
            }
        }
        for( l=0; l<k; l++)
        {
            count=0;
            for(int i=0; i<h; i++)
            {
                for(int j=0; j<w; j++)
                {
                    if(s[i][j]==lan[l]&&vis[i][j]==0)
                    {
                        count++;
                        fill(i,j);
                    }
                }
            }
            store[l]=count;
        }
        for(int i=0; i<k; i++)
        {
            for(int j=i+1; j<k; j++)
            {
                if(store[i]<store[j])
                {
                    int temp=store[i];
                    store[i]=store[j];
                    store[j]=temp;
                    char z=lan[i];
                    lan[i]=lan[j];
                    lan[j]=z;

                }
                else if(store[i]==store[j])
                {
                    if(lan[i]>lan[j])
                    {
                        char z=lan[i];
                        lan[i]=lan[j];
                        lan[j]=z;
                    }
                }
            }
        }

        cout<<"World #"<<t<<endl;
        for(int i=0; i<k; i++)
        {
            cout<<lan[i]<<": "<<store[i]<<endl;
        }
        memset(s,'\0',sizeof s);
        memset(vis,0,sizeof vis);
        t++;
    }
    return 0;
}
