#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x[1003],y[1003],n,xx,yy;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>xx>>yy;
        for(int i=0; i<n; i++)
            cin>>x[i]>>y[i];
        for(int j=0; j<n; j++)
        {
            if(x[j]==xx||y[j]==yy)
                cout<<"divisa"<<endl;
            else if(x[j]>xx)
            {
                if(y[j]>yy)
                    cout<<"NE"<<endl;
                else
                    cout<<"SE"<<endl;
            }
            else if(x[j]<xx)
            {
                if(y[j]<yy)
                    cout<<"SO"<<endl;
                else
                    cout<<"NO"<<endl;
            }

        }

    }

    return 0;
}

