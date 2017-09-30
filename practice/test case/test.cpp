#include<bits/stdc++.h>
using namespace std;

main() {
    freopen("in", "w", stdout);
    cout << 100 << endl;

    for(int cs = 0; cs < 100; cs++) {
//        cout << 1000 << endl;

        for(int i = 0; i < 1000; i++) {
            cout << char('x' + i % 3);
        }

        cout << endl;
    }
}
