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
                int n, x;
                cin >> n >> x;
                int ans = 0;
                int cnt = 0;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                sort(all(v));
                for (int i = n - 1; i >= 0; i--) {
                        cnt++;
                        if (v[i]*cnt >= x) {
                                ans++;
                                cnt = 0;
                        }
                }
                cout << ans << '\n';
        }
        return 0;
}