#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a[5001],ar[5001],br[5001],cr[5001];
    int f,s,t,fs,ss,ts,q;
    int one,two,three;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    f=0;s=0;t=0;
    one=0;two=0;three=0;
    for(int j=1;j<=n;j++)
    {
        if(a[j]==1)
        f=1;
        if(a[j]==2)
        s=1;
        if(a[j]==3)
        t=1;
    }
    if(f==1&&s==1&&t==1)
    {
        fs=0;ss=0;ts=0;
        for(int k=1;k<=n;k++){
        if(a[k]==1)
        {fs++;ar[++one]=k;}
        if(a[k]==2)
        {ss++;br[++two]=k;}
        if(a[k]==3)
        {ts++;cr[++three]=k;}
        }
        q=min(min(fs,ss),ts);
        cout<<q<<endl;
        for(int h=1;h<=q;h++)
        {
            cout<<ar[h]<<" "<<br[h]<<" "<<cr[h];
            cout<<endl;
        }
    }
    else
    cout<<"0"<<endl;

    return 0;
}
