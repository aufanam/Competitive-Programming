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
        int t;
        cin >> t;
        while (t--) {
                int n, m;
                cin >> n >> m;
                if (n == 1) {
                        cout << 1 << ' ' << m << '\n';
                } else if (m == 1) {
                        cout << n << ' ' << 1 << '\n';
                } else {
                        cout << 2 << ' ' << 2 << '\n';
                }
        }
        return 0;
}