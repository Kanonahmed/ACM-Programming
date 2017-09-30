#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,num1;
    while(cin>>n)
    {
        if(n==0)break;
        while(n>9)
        {
              sum=0;
            while(n!=0)
            {
                sum+=n%10;
                n=n/10;
            }
            n=sum;
        }
        cout<<n<<endl;
    }

    return 0;
}
