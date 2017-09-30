#include<bits/stdc++.h>
using namespace std;
int aa[27];
int bb[27];
int cc[27];
int tmp[27];
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0; i<a.size(); i++)aa[a[i]-'a']++;
    for(int i=0; i<b.size(); i++)bb[b[i]-'a']++;
    for(int i=0; i<c.size(); i++)cc[c[i]-'a']++;
    int fst=0,scd=0,sum=0;
    int inf=100000;
    for(int i=0; i<=1000000; i++)
    {
        bool flag=true;
        for(int j=0; j<26; j++)
        {
            int g=i;
            if(aa[j]>=bb[j])tmp[j]=aa[j]-g*bb[j];
            else if(aa[j]<bb[j])
            {
                flag=false;
                break;
            }
            if(tmp[j]<0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            inf=1000000;
            for(int k=0; k<26; k++)
            {
                if(tmp[k]>=cc[k]&&cc[k])inf=min(inf,tmp[k]/cc[k]);
                else if(tmp[k]<cc[k])
                {
                    inf=0;
                    break;
                }
            }
            if(sum<=(i+inf))
            {
                fst=i;
                scd=inf;
                sum=i+inf;
            }
            else
            {

                for(int l=0; l<fst; l++)cout<<b;
                for(int y=0; y<26; y++)
                    aa[y]=aa[y]-fst*bb[y];
                for(int l=0; l<scd; l++)cout<<c;
                for(int y=0; y<26; y++)
                    aa[y]=aa[y]-scd*cc[y];
                for(int y=0; y<26; y++)
                {
                    if(aa[y])
                    {
                        while(aa[y])
                        {
                            char ty=y+'a';
                            cout<<ty;
                            aa[y]--;
                        }
                    }
                }
                break;
            }
        }
        else
        {
            for(int l=0; l<fst; l++)cout<<b;
            for(int y=0; y<26; y++)
                aa[y]=aa[y]-fst*bb[y];
                inf=1000000;
            for(int k=0; k<26; k++)
            {
                if(aa[k]>=cc[k]&&cc[k])inf=min(inf,aa[k]/cc[k]);
                else if(aa[k]<cc[k])
                {
                    inf=0;
                    break;
                }
            }
               scd=inf;

            for(int l=0; l<scd; l++)cout<<c;
            for(int y=0; y<26; y++)
                aa[y]=aa[y]-scd*cc[y];
            for(int y=0; y<26; y++)
            {
                if(aa[y])
                {
                    while(aa[y])
                    {
                        char ty=y+'a';
                        cout<<ty;
                        aa[y]--;
                    }
                }
            }
            break;
        }
    }

    return 0;
}
