#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int cnt[100000];
int factorial(int x)
{
    int sum=1,i;
    for( i=1; i<=x; i++)
        sum=sum*i;
    return sum;
}

int main()
{
    int i,j,line,l,count,strt,n;
    string a;
    map <string, int>mp;
    vector<string>v;
    string temp="";
    cin>>line;
    getchar();
    while(line!=0)
    {
        getline(cin,a);
        int ks=0;
        count=0;
        for(i=0; i<=a.size(); i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                temp+=a[i];
            }
            else if(a[i]>='A'&&a[i]<='Z')
            {
                temp+=a[i];
            }
            else
            {
                count++;
                if(mp.find(temp)==mp.end())
                {
                    mp[temp]=++ks;
                    v.push_back(temp);
                }
                cnt[mp[temp]]++;
                temp="";

            }
        }
        l=1;
        for(i=0; i<v.size(); i++)
        {
            l=l*factorial(cnt[mp[v[i]]]);
//            cout<<l<<endl;
            //cout<<v[i]<<" "<<cnt[mp[v[i]]]<<l<<endl;
        }
        n=factorial(count)/l;
        printf("1/%d\n",n);
        line--;
        mp.clear();
        v.clear();
        memset(cnt, 0, sizeof cnt);
    }
    return 0;
}
