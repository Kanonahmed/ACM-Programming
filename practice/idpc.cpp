#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int tc,t,i,j,count,k;
    string a;
    char x,y,z;
    cin>>tc;
    getchar();
    t=1;
    while(tc!=0)
    {
        getline(cin,a);
        scanf("%c %c %c",&x,&y,&z);
        getchar();
        count=0;
        for(i=0; i<=a.size(); i++)
        {
            if(a[i]==x)
                for(j=i+1; j<=a.size(); j++)
                {
                    if(a[j]==y)
                        for( k=j+1; k<=a.size(); k++)
                        {
                            if(a[k]==z)
                            {
                                count++;
                            }
                        }
                }
        }

        printf("Case %d: %d\n",t,count);
        tc--;
        t++;
    }


    return 0;
}
