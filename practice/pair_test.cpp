#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int ,int> p[5];
    for(int i=0; i<5; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+5);
    for(int j=0; j<5; j++)
        cout<<p[j].first<<" "<<p[j].second<<endl;


    return 0;
}
