#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    string ss="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='C'&&s[i-1]<'A'&&s[i+1]<'A')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        int i;
        string nw="";
        for(i=1;s[i]<'A';i++)
        nw+=s[i];
        int sum=0;
        for(int j=i+1;j<s.size();j++){
        sum=sum*10+s[j]-'0';
        }
        string fs="";
        while(sum>26)
        {
            int rem=sum%26;
            if(rem==0)
            {
                fs+='Z';
                sum=(sum/26)-1;
            }
            else{
            fs+=ss[rem];
            sum=sum/26;}
        }
        fs+=ss[sum];
        reverse(fs.begin(),fs.end());
        fs+=nw;
        cout<<fs;
    }
    else
    {
        cout<<"R";
        int n=0;
        int i;
        for(i=0;s[i]>='A';i++){
           n=n*26+(s[i]-64);
        }
        for(int j=i;j<s.size();j++)
        cout<<s[j];
        cout<<"C"<<n;
    }
     cout<<endl;

    }
    return 0;
}
