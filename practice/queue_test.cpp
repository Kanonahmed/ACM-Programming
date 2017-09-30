#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>qt;
    qt.push(5);
    cout<<qt.size()<<endl;
    qt.pop();
    cout<<qt.size()<<endl;
    int n;
    do
    {
        cin>>n;
        qt.push(n);
    }while(n);
    //qt.push(1);
    while(!qt.empty())
    {
        //qt.front()-=qt.back();
        cout<<qt.front()<<" ";
        ///cout<<qt.back(); never use for print elements from back
        qt.pop();
    }
    cout<<endl;
    queue<int>st;
    int sum=0;
    for(int j=1;j<=10;j++)
    {
        st.push(j);
        sum+=st.front();
        st.pop();
    }
    cout<<sum<<endl;


    return 0;
}
