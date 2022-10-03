#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
        int n;
        cin >> n;
        int cur = 1;
        // // subsoal 1
        // for (int i = 1; i <= n; i++) {
        //         cout << "BENAR" << endl;
        // }
        // // subsoal 2
        // for (int i = 1; i <= n; i++) {
        //         cout << "SALAH" << endl;
        // }
        // // subsoal 3
        // for (int i = 1; i <= n; i++) {
        //         if (i%2) {
        //                 cout << "BENAR" << endl;
        //         } else {
        //                 cout << "SALAH" << endl;
        //         }
        // }
        // subsoal 4
        for (int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                if (x == cur) {
                        cout << "BENAR" << endl;
                        cur++;
                } else {
                        cout << "SALAH" << endl;
                        cur = 1;
                }
        }
        return 0;
}