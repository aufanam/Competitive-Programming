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
                int n, l, r;
                cin >> n >> l >> r;
                vector<int> ans(n+5, -1);
                for (int i = 1; i <= n; i++) {
                        int z = ((l - 1)/i + 1)*i;
                        if (z <= r) {
                                ans[i] = z;     
                        } else {
                                cout << "NO\n";
                                goto Next;
                        }
                }
                cout << "YES\n";
                for (int i = 1; i <= n; i++) {
                        cout << ans[i] << ' ';
                }
                cout << '\n';
                Next:;
        }
        return 0;
}