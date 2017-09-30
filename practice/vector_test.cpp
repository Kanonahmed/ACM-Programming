#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v;
    int n;
    for(int i=0;i<5;i++)
    {

        cin>>n;
        v.push_back(n);
      ///  //cin>>v[i];  never use for getting input from user
    }
    v.erase(v.begin()+1);
    for(int j=0;j<v.size();j++)
    cout<<v[j]<<" ";

cout<<endl;
    /// iterator declearing of vector
    vector<int>::iterator ii;
    for(ii=v.begin();ii!=v.end();++ii)
    cout<<*ii<<" ";

    cout<<endl;
    sort(v.begin(),v.end());
    for(ii=v.begin();ii!=v.end();++ii)
    cout<<*ii<<" ";


    return 0;
}
