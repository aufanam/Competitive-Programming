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
        freopen("aufanmantap.txt", "w", stdout);
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(k);
        for (auto &x : v) cin >> x;
        int cur = 0;
        for (int i = 0; i < k; i++) {
                cout << 0 << ' ' << 1 << ' ' << cur << ' ' << cur + v[i] << '\n';
                cur += v[i];
        }
        return 0;
}