#include<bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MX  10000000
int n, seq[MX+5], L[MX+5], I[MX+5];

int lis(){
    I[0]=-INF;
    for(int i=1;i<=n;i++) I[i]=INF;
    int len=0;
    for(int i=0;i<n;i++){
        int low=0, high=len, mid;
        while(low<=high){
            mid=(low+high)/2;
            if(I[mid]<seq[i]) low=mid+1;
            else high=mid-1;
        }
        I[low]=seq[i], L[i]=low;
        if(len<low) len=low;
    }
    return len;
}

void print(int len){
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(L[i]==len){
            ans.push_back(seq[i]);
            len--;
        }
    }
    reverse(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++) cin>>seq[i];
    int res=lis();
    printf("LIS length: %d\n", res);
    print(res);
    return 0;
}
