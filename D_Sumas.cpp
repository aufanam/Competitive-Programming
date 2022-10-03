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
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        map<int, int> cnt;
        int br = 0;
        for (int i = 0; i < n; i++) {
                cin >> v[i];
                if (v[i] == i + 1) br++;
                v[i] %= m;
                cnt[v[i]]++;
        }
        if (br == n && n == m) {
                if (n == 2) {
                        cout << "1\n";
                } else if (n == 3) {
                        cout << "-1\n";
                } else {
                        cout << "2\n";
                }
                return 0;
        }
        for (int i = 0; i < n; i++) {
                if (m%2 == 0 && v[i] == m/2) {
                        if (cnt[v[i]] >= 2) {
                                cout << "-1\n";
                                return 0;
                        }
                } else if (v[i] == 0) {
                        if (cnt[v[i]] >= 2) {
                                cout << "-1\n";
                                return 0;
                        }
                } else {
                        if (cnt[m - v[i]] > 0) {
                                cout << "-1\n";
                                return 0;
                        }
                }
        }
        cout << "1\n";
        return 0;
}