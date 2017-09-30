#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    string a,temp="";
    int sum,flag,line;
    vector<string>ss;
    cin>>line;
    getchar();
    while(line!=0){
    getline(cin,a);
    flag=0;
    for(int i=0; i<=a.size(); i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            temp+=a[i];
            flag=1;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            temp+=a[i];
            flag=1;
        }
        else
        {
            if(flag==1)
                ss.push_back(temp);
            temp="";
            flag=0;
        }

    }
    sum=(ss.size())*420;
    cout<<sum<<endl;
    line--;
    ss.clear();
    }
    return 0;
}
