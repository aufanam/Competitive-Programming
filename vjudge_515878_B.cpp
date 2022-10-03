#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define range(a, b, c)                                                  a <= b && b <= c
using namespace std;
const int INF = 1e18;
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, m, r, c, lf, rg;
        cin >> n >> m >> r >> c >> lf >> rg;
        vector<vector<char>> v(n+5, vector<char>(m+5));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        cin >> v[i][j];
                }
        }
        vector<vector<int>> need(n+5, vector<int>(m+5, INF));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        q.push({0, {r, c}});
        need[r][c] = 0;
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        while (!q.empty()) {
                auto z = q.top();
                q.pop();
                for (int k = 0; k < 4; k++) {
                        if (k == 0 || k == 1 || k == 2) {
                                if (range(1, z.se.fi + dx[k], n) && range(1, z.se.se + dy[k], m) && need[z.se.fi + dx[k]][z.se.se + dy[k]] > z.fi && v[z.se.fi + dx[k]][z.se.se + dy[k]] == '.') {
                                        need[z.se.fi + dx[k]][z.se.se + dy[k]] = z.fi;
                                        q.push({z.fi, {z.se.fi + dx[k], z.se.se + dy[k]}});
                                }
                        } else if (k == 3) {
                                if (range(1, z.se.fi + dx[k], n) && range(1, z.se.se + dy[k], m) && need[z.se.fi + dx[k]][z.se.se + dy[k]] > z.fi + 1 && v[z.se.fi + dx[k]][z.se.se + dy[k]] == '.') {
                                        need[z.se.fi + dx[k]][z.se.se + dy[k]] = z.fi + 1;
                                        q.push({z.fi + 1, {z.se.fi + dx[k], z.se.se + dy[k]}});
                                }
                        }
                }
        }
        // for (int i = 1; i <= n; i++) {
        //         for (int j = 1; j <= m; j++) {
        //                 cout << need[i][j] << ' ';
        //         }
        //         cout << '\n';
        // }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        if (need[i][j] <= lf) {
                                if (j + need[i][j] - c <= rg) {
                                        ans++;
                                }
                        }
                }
        }
        cout << ans << '\n';
        return 0;
}