#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    char arr[10000],brr[10000],crr[10000],drr[10000];
    int i,sum,l1,l2,mx,carry,j,k,mn,dif;
    gets(arr);
    gets(brr);
    l1=strlen(arr);
    l2=strlen(brr);
    mx=max(l1,l2);
    mn=min(l1,l2);
    dif=mx-mn;
    if(l1!=l2) {
        if(l1<l2) {
            for(i=mx-1; i>=0; i--) {
                if(i<dif)
                    arr[i]='0';
                else
                    arr[i]=arr[i-dif];
            }
        } else {
            for(i=mx-1; i>=0; i--) {
                if(i<dif)
                    brr[i]='0';
                else
                    brr[i]=brr[i-dif];
            }
        }
    }
    carry=0;
    sum=0;
    k=0;
    for(i=mx-1; i>=0; i--) {
        sum+=(arr[i]-'0')+(brr[i]-'0')+carry;
        if(sum>9) {
            crr[k]=sum%10+'0';
            sum=0;
            carry=1;

        } else {
            crr[k]=sum+'0';
            carry=0;
            sum=0;
        }
        k++;

    }
    if(carry==1) {
        crr[k]=carry+'0';

    } else
        k--;
    for(j=k; j>=0; j--)
        cout<<crr[j];

    return 0;
}
