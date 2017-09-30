#include<bits/stdc++.h>
using namespace std;
int x,k;
int a[10];
void print()
{
    int x=0;
    int p=8;
    for(int i=0; i<9; i++)
    {
        if(a[i]!=0&&p>0)
        {
            if(x==0)
            {
                if(a[i]<0)
                {
                    if(a[i]!=-1)
                    {
                        if(p!=1)
                        {
                            cout<<"-"<<a[i]*-1<<"x^"<<p;
                            x=1;
                            p--;
                        }
                        else
                        {
                            cout<<"-"<<a[i]*-1<<"x";
                            x=1;
                            p--;
                        }

                    }
                    else
                    {
                        if(p!=1)
                        {
                            cout<<"-"<<"x^"<<p;
                            x=1;
                            p--;
                        }
                        else
                        {
                            cout<<"-"<<"x";
                            x=1;
                            p--;
                        }

                    }
                }
                else
                {
                    if(a[i]!=1)
                    {
                        if(p!=1)
                        {
                            cout<<a[i]<<"x^"<<p;
                            x=1;
                            p--;
                        }
                        else
                        {
                            cout<<a[i]<<"x";
                            x=1;
                            p--;
                        }
                    }
                    else
                    {
                        if(p!=1)
                        {
                            cout<<"x^"<<p;
                            x=1;
                            p--;
                        }
                        else
                        {
                            cout<<"x";
                            x=1;
                            p--;

                        }
                    }
                }
            }
            else
            {
                if(a[i]<0)
                {
                    if(a[i]!=-1)
                    {
                        if(p!=1)
                        {
                            cout<<" - "<<a[i]*-1<<"x^"<<p;
                            p--;
                        }
                        else
                        {
                            cout<<" - "<<a[i]*-1<<"x";
                            p--;
                        }

                    }
                    else
                    {
                        if(p!=1)
                        {
                            cout<<" - "<<"x^"<<p;
                            p--;
                        }
                        else
                        {
                            cout<<" - "<<"x";
                            p--;
                        }
                    }
                }

                else
                {
                    if(a[i]!=1)
                    {
                        if(p!=1)
                        {
                            cout<<" + "<<a[i]<<"x^"<<p;
                            p--;
                        }
                        else
                        {
                            cout<<" + "<<a[i]<<"x";
                            p--;
                        }

                    }
                    else
                    {
                        if(p!=1)
                        {
                            cout<<" + "<<"x^"<<p;
                            p--;
                        }
                        else
                        {
                            cout<<" + "<<"x";
                            p--;
                        }
                    }
                }
            }
        }
        else if(a[i]!=0&&!p)
        {
            if(x==0)
            {
                if(a[i]<0)
                {
                    cout<<"-"<<a[i]*-1;
                }
                else cout<<a[i];
            }
            else
            {
                if(a[i]<0)
                {
                    cout<<" - "<<a[i]*-1;
                }
                else
                {
                    cout<<" + "<<a[i];
                }
            }
        }
        else p--;
    }
}
int main()
{
    while(cin>>x)
    {
        int s=0;
        if(x==0)s++;
        a[0]=x;
        for(int i=1; i<=8; i++)
        {
            cin>>a[i];
            if(a[i]==0)s++;
        }
        if(s==9)cout<<"0"<<endl;
        else
        {
            print();
            cout<<endl;
        }
    }

    return 0;
}
