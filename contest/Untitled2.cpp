#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
const int N = 10000005;
int n, k, a[N], vis[N];

int main() {
    cin >> n >> k;
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }

    int st = 1;
    while(st <= k) {
        vis[st] = 1;

        if(st == k) break;

        st = st + a[st];
    }

    if(vis[k]) puts("YES");
    else puts("NO");

 return 0;
}
