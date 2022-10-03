#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
int ask(int x, int y) {
        cout << "? " << x << " " << y << endl;
        int ret;
        cin >> ret;
        return ret;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        vector<vector<int>> ans(1111, vector<int>(1111, -1));
        int lf = n, rg = 1;
        {
                int l = 2;
                int r = n;
                while (l <= r) {
                        int m = (l + r)/2;
                        if (ask(1, m) == n - 1) {
                                lf = m;
                                r = m - 1;
                        } else {
                                l = m + 1;
                        }
                }
        }
        {
                int l = 1;
                int r = n - 1;
                while (l <= r) {
                        int m = (l + r)/2;
                        if (ask(m, n) == n - 1) {
                                rg = m;
                                l = m + 1;
                        } else {
                                r = m - 1;
                        }
                }
        }
        if (lf > rg) swap(lf, rg);
        vector<int> v(1111, -1);
        vector<bool> vis(1111, false);
        vis[1] = true;
        vis[n] = true;
        v[lf] = 1;
        v[rg] = n;
        int cnt = 2;
        for (int i = rg - 1; i >= 1; i--) {
                if (v[i] != -1) continue;
                int zx = ask(i, i + 1);
                int pos1 = v[i+1] - zx;
                int pos2 = v[i+1] + zx;
                if (pos1 < 1) v[i] = pos2;
                else if (pos2 > n) v[i] = pos1;
                else {
                        int fd = ask(i, i+2);
                        int mn = min(v[i+1], v[i+2]);
                        int mx = max(v[i+1], v[i+2]);
                        if (max(mx, pos1) - min(mn, pos1) == fd) v[i] = pos1;
                        else if (max(mx, pos2) - min(mn, pos2) == fd) v[i] = pos2;
                }
        }
        for (int i = rg + 1; i <= n; i++) {
                if (v[i] != -1) continue;
                int zx = ask(i - 1, i);
                int pos1 = v[i-1] - zx;
                int pos2 = v[i-1] + zx;
                if (pos1 < 1) v[i] = pos2;
                else if (pos2 > n) v[i] = pos1;
                else {
                        int fd = ask(i - 2, i);
                        int mn = min(v[i-2], v[i-1]);
                        int mx = max(v[i-2], v[i-1]);
                        if (max(mx, pos1) - min(mn, pos1) == fd) v[i] = pos1;
                        else if (max(mx, pos2) - min(mn, pos2) == fd) v[i] = pos2;
                }
        }
        cout << "! ";
        for (int i = 1; i <= n; i++) {
                cout << v[i] << ' ';
        }
        cout << endl;
        return 0;
}
