#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
bool chk(int x1, int y1, int x2, int y2, int x3, int y3) {
        return (((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)) + ((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3)) == ((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3)));
}
int main()
{
        vector<pair<int, int>> p;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
                int a, b;
                cin >> a >> b;
                p.push_back({a, b});
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        for (int k = 0; k < n; k++) {
                                for (int l = 0; l < n; l++) {
                                        if (i == j || i == k || i == l || j == k || j == l || k == l) continue;
                                        int cnt = 0;
                                        if (chk(p[i].fi, p[i].se, p[j].fi, p[j].se, p[k].fi, p[k].se)) cnt++;
                                        if (chk(p[j].fi, p[j].se, p[k].fi, p[k].se, p[l].fi, p[l].se)) cnt++;
                                        if (chk(p[k].fi, p[k].se, p[l].fi, p[l].se, p[i].fi, p[i].se)) cnt++;
                                        if (chk(p[l].fi, p[l].se, p[i].fi, p[i].se, p[j].fi, p[j].se)) cnt++;
                                        if (cnt == 4) {
                                                // cout << i << ' ' << j << ' ' << k << ' ' << l << '\n';
                                                ans++;
                                        }
                                }
                        }
                }
        }
        assert(ans%8 == 0);
        ans /= 8;
        cout << ans << '\n';
        return 0;
}