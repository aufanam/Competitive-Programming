#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, k;
        cin >> n >> k;
        // // subsoal 1
        // /*
        // 1 2 3 4 5
        // 1 10 11 100 101

        // 10

        // -1 2 3 -1 -1
        // */
        // cout << "-1 2 3 -1 -1" << '\n';
        // // subsoal 2
        // for (int i = 1; i <= n; i++) {
        //         int x;
        //         cin >> x;
        //         cout << x << '\n';
        // }
        // // subsoal 3
        // /*
        // 11
        // 100
        // */
        // for (int i = 1; i <= n; i++) {
        //         cout << "-1\n";
        // }
        // // subsoal 4
        // for (int i = 1; i <= n; i++) {
        //         int x;
        //         cin >> x;
        //         int pos = -1;
        //         for (int j = 0; j <= x; j++) {
        //                 if ((k | j) == x) {
        //                         pos = j;
        //                 }
        //         }
        //         cout << pos << '\n';
        // }
        // subsoal 5 & 6
        for (int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                if ((x & k) == k) {
                        cout << (x^k) << '\n';
                } else {
                        cout << -1 << '\n';
                }
        }
        return 0;
}