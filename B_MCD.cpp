#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> ans(17, vector<int>(17));
        for (int i = 1; i <= 15; i++) {
                for (int j = 1; j <= 15; j++) {
                        cout << "? " << i << ' ' << j << endl;
                        int ret;
                        cin >> ret;
                        ans[i][j] = ret;
                }
        }
        for (int x = 1; x <= 15; x++) {
                for (int y = 1; y <= 15; y++) {
                        int cnt = 0;
                        for (int i = 1; i <= 15; i++) {
                                for (int j = 1; j <= 15; j++) {
                                        if (gcd(abs(x - i), abs(y - j)) == ans[i][j]) {
                                                cnt++;
                                        }
                                }
                        }
                        if (cnt == 225) {
                                cout << "? " << x << " " << y << endl;
                                int ret;
                                cin >> ret;
                                return 0;
                        }
                }
        }
        return 0;
}