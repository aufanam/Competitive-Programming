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
        int n;
        cin >> n;
        vector<vector<pair<int, int>>> pos(55);
        vector<int> v(n+5);
        for (int i = 1; i <= n; i++) {
                cin >> v[i];
        }
        int zzzz = *max_element(v.begin() + 1, v.begin() + n + 1);
        if (zzzz <= 50) {
                for (int i = 0; i <= 50; i++) {
                        for (int j = 0; j <= 50; j++) {
                                for (int k = 0; k <= 50; k++) {
                                        if ((i^j) < (j^k)) {
                                                pos[j].push_back({i, k});
                                        }
                                }
                        }
                }
                vector<vector<int>> pref(n+5, vector<int>(55, 0));
                for (int i = 1; i <= n; i++) {
                        for (int j = 0; j <= 50; j++) {
                                pref[i][j] = pref[i-1][j];
                        }
                        pref[i][v[i]]++;
                }
                int ans = 0;
                for (int i = 2; i < n; i++) {
                        int z = v[i];
                        for (auto zz : pos[z]) {
                                ans += (pref[i-1][zz.fi])*(pref[n][zz.se] - pref[i][zz.se]);
                        }
                }
                cout << ans << '\n';
        } else {
                int ans = 0;
                for (int j = 2; j < n; j++) {
                        vector<int> aw;
                        vector<int> ak;
                        for (int i = 1; i < j; i++) {
                                aw.push_back(v[i]^v[j]);
                        }
                        for (int k = j + 1; k <= n; k++) {
                                ak.push_back(v[j]^v[k]);
                        }
                        sort(all(aw));
                        sort(all(ak));
                        for (int x = 0; x < aw.size(); x++) {
                                int l = 0;
                                int r = ak.size() - 1;
                                int pos = ak.size();
                                while (l <= r) {
                                        int m = (l + r)/2;
                                        if (aw[x] < ak[m]) {
                                                pos = m;
                                                r = m - 1;
                                        } else {
                                                l = m + 1;
                                        }
                                }
                                ans += (ak.size() - pos);
                        }
                }
                cout << ans << '\n';
        }
        return 0;
}