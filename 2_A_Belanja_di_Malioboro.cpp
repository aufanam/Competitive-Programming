#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

template <typename T>T modx(T a,T b)                                    {return (a-1)%b+1;}
template <typename T>T modp(T a,T b)                                    {return (a%b+b)%b;}
using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string subsoal;
        cin >> subsoal;
        int m, n, k;
        cin >> m >> n >> k;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
                int a, b;
                cin >> a >> b;
                v[i] = {a, b};
        }
        vector<int> ans(m+5, -1);
        while (k--) {
                int x;
                cin >> x;
                x %= m;
                if (ans[x] != -1) {
                        cout << ans[x] << '\n';
                        continue;
                }
                vector<int> zz;
                for (int i = 0; i < n; i++) {
                        zz.push_back(modx(modp(v[i].fi + v[i].se*x, m), m));
                }
                sort(all(zz));
                // for (auto z : zz) {
                //         cout << z << ' ';
                // }
                // cout << '\n';
                ans[x] = zz[0] + m - zz[n-1];
                for (int i = 0; i < n - 1; i++) {
                        ans[x] = min(ans[x], zz[i+1] - zz[i]);
                }
                cout << ans[x] << '\n';
        }
        return 0;
}