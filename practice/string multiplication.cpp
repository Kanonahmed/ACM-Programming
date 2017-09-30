#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
char d[10000][10000];
int main()
{
    char a[100000],b[100000],c[100000];
    int fsum,fcarry,flag=0;
    int l1,l2,i,j,sum,mul,carry,k,vul;
    int col,row;
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    //cout<<l1<<" "<<l2;
    for(i=l2-1; i>=0; i--)
    {
        for(j=(l1+l2-1); j>=0; j--)
            d[i][j]='0';
    }
    carry=0;
    for(i=l2-1,vul=0; i>=0; i--,vul++)
    {
        for(j=l1-1,k=vul; j>=0; j--)
        {
            mul=(a[j]-'0')*(b[i]-'0')+carry;
            if(mul>9)
            {
                d[vul][k]=(mul%10)+'0';
                carry=mul/10;
            }
            else
            {
                d[vul][k]=mul+'0';
                carry=0;
            }
            k++;
        }
        if(carry!=0)
        {
            d[vul][k]=carry+'0';
            carry=0;
        }
    }
    /*cout<<endl;
    for(i=0; i<l2; i++)
    {
        for(j=0; j<(l1+l2); j++)
        {
            cout<<d[i][j];
        }
        cout<<endl;
    }*/

    /*doing addition*/
    fcarry=0;
    for(col=0; col<l2+l1; col++)
    {

        fsum=0;
        for(row=0; row<l2; row++)
        {
            fsum+=(d[row][col]-'0');

        }
        fsum+=fcarry;
        if(fsum>9)
        {
            c[col]=(fsum%10)+'0';
            fcarry=fsum/10;
        }
        else
        {
            c[col]=fsum+'0';
            fcarry=0;
        }

    }
    if(fcarry!=0)
    {
        c[col]=fcarry+'0';
    }


/// for display

    for(i=col-1; i>=0; i--)
    {
        if(c[i]!='0')
        {
            for(j=i; j>=0; j--)
            {
                cout<<c[j];
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("0");

    return 0;
}
