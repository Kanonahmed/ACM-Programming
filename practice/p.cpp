#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int num,n,rem,sum,i=0,arr[100],j,k=0;
      cin>>num;
     while(num>9)
        {
          rem=num%10;
          //cout<<rem<<" ";
          arr[i]=rem;
          num=num/10;
          i++;
        }
         //cout<<num;
         arr[i]=num;
         sort(arr,arr+(i+1));
             if(arr[0]==0)
             {
                  for(j=1;j<=i;j++)
                  {
                      if(arr[j]!=0)
                      {
                          arr[0]=arr[j];
                          arr[j]=0;
                          break;
                      }
                  }

             }
        for(j=0;j<=i;j++)
        cout<<arr[j];


             return 0;

}
