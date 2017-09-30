#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=m; j++)
                cout<<"#";
        }
        else if(flag==0)
        {
            for(int k=1; k<m; k++)
                cout<<".";
            cout<<"#";
            flag=1;
        }
        else
        {
            cout<<"#";
            for(int l=2; l<=m; l++)
                cout<<".";
            flag=0;
        }
        cout<<endl;
    }


    return 0;
}
