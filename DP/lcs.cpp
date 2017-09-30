#include<bits/stdc++.h>
using namespace std;
string a,b;
int DP[1000][1000];
int lcs(int i,int j)
{
    if(i>=a.size()||j>=b.size())return 0;
    if(DP[i][j]!=-1)return DP[i][j];
    int ans=0;
    if(a[i]==b[j])
        ans=1+lcs(i+1,j+1);
    else
    {
        int r1=lcs(i,j+1);
        int r2=lcs(i+1,j);
        ans=max(r1,r2);
    }
    DP[i][j]=ans;
    return DP[i][j];
}
string s="";
void print(int i,int j)
{
    if(i>=a.size()||j>=b.size())
    {
        cout<<s<<endl;
        return ;
    }
    if(a[i]==b[j])
    {
        s+=a[i];
        print(i+1,j+1);
        s.erase(s.end()-1);
    }
    else
    {
        if(DP[i][j+1]>DP[i+1][j])print(i,j+1);
        else if(DP[i+1][j]>DP[i][j+1]) print(i+1,j);
        else
        {
            print(i+1,j);
            print(i,j+1);
        }
    }
}
int main()
{
    cin>>a>>b;
    memset(DP,-1,sizeof DP);
    cout<<lcs(0,0)<<endl;
    print(0,0);
    cout<<s<<endl;

    return 0;
}

/*hellom
  hllmo */
