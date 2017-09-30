#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

    int tc;
    unsigned a,f;
    cin>>tc;
    while(tc)
    {
        cin>>a>>f;
        for(int p=1; p<=f; p++)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            for(int k=a-1; k>=1; k--)
            {
                for(int l=1; l<=k; l++)
                {
                    cout<<k;
                }

                cout<<endl;
            }
            if(p<f)
                cout<<endl;
        }
        tc--;
        if(tc>0)
            cout<<endl;
    }
    return 0;
}
