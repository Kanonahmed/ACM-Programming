#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1= "00";
    //1cout<<s1<<endl;
    int n,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s!=s1)
        {
            count++;
            s1=s;
        }
    }
cout<<count<<endl;

    return 0;
}
