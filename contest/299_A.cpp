#include<bits/stdc++.h>
using namespace std;
string b[]= {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
             "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
            };
int main()
{
    int n;
    string a[10];
    a[0]="";
    a[1]="";
    a[2]="twenty";
    a[3]="thirty";
    a[4]="forty";
    a[5]="fifty";
    a[6]="sixty";
    a[7]="seventy";
    a[8]="eighty";
    a[9]="ninety";
    cin>>n;
    if(n<=20)
        cout<<b[n]<<endl;
    else
    {
     int rem=n%10;
     n=n/10;
     if(rem)
     cout<<a[n]<<"-"<<b[rem]<<endl;
     else cout<<a[n]<<endl;
    }


    return 0;
}
