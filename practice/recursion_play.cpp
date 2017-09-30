#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n<4)
    {
        //cout<<n<<endl;
        for(int i=0;i<=n;i++){
        print(n+1);
        cout<<n<<endl;
        }
    }
   // cout<<n<<endl;
}
int main()
{

print(0);

    return 0;
}
