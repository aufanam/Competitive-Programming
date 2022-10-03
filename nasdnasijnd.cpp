// #include <bits/stdc++.h>
// #define int long long
// #define fi first
// #define se second
// #define all(x) (x).begin(), (x).end()

// using namespace std;

// int32_t main()
// {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//         freopen("aufanmantap.txt", "w", stdout);
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> v(n+5, vector<int>(m+5));
//         for (int i = 1; i <= n; i++) {
//                 for (int j = 1; j <= m; j++) {
//                         char c;
//                         cin >> c;
//                         v[i][j] = c - '0';
//                 }
//         }
//         vector<pair<pair<int, int>, int>> ans;
//         vector<vector<bool>> vis(n+5, vector<bool>(m+5, false));
//         for (int i = 1; i <= n; i++) {
//                 for (int j = 1; j <= m; j++) {  
//                         if (i <= n - 1 && j <= m - 2) {
//                                 if (!v[i][j] && !v[i][j+1] && !v[i][j+2] && !v[i+1][j+1] && !vis[i][j] && !vis[i][j+1] && !vis[i][j+2] && !vis[i+1][j+1]) {
//                                         vis[i][j] = true;
//                                         vis[i][j+1] = true;
//                                         vis[i][j+2] = true;
//                                         vis[i+1][j+1] = true;
//                                         ans.push_back({{i, j + 1}, 1});
//                                 }
//                         }
//                         if (i <= n - 2 && j >= 2) {
//                                 if (!v[i][j] && !v[i+1][j] && !v[i+2][j] && !v[i+1][j-1] && !vis[i][j] && !vis[i+1][j] && !vis[i+2][j] && !vis[i+1][j-1]) {
//                                         vis[i][j] = true;
//                                         vis[i+1][j] = true;
//                                         vis[i+2][j] = true;
//                                         vis[i+1][j-1] = true;
//                                         ans.push_back({{i + 1, j}, 2});
//                                 }
//                         }
//                         if (i >= 2 && j <= m - 2) {
//                                 if (!v[i][j] && !v[i][j+1] && !v[i][j+2] && !v[i-1][j+1] && !vis[i][j] && !vis[i][j+1] && !vis[i][j+2] && !vis[i-1][j+1]) {
//                                         vis[i][j] = true;
//                                         vis[i][j+1] = true;
//                                         vis[i][j+2] = true;
//                                         vis[i-1][j+1] = true;
//                                         ans.push_back({{i, j + 1}, 3});
//                                 }
//                         }
//                         if (i <= n - 2 && j <= m - 1) {
//                                 if (!v[i][j] && !v[i+1][j] && !v[i+2][j] && !v[i+1][j+1] && !vis[i][j] && !vis[i+1][j] && !vis[i+2][j] && !vis[i+1][j+1]) {
//                                         vis[i][j] = true;
//                                         vis[i+1][j] = true;
//                                         vis[i+2][j] = true;
//                                         vis[i+1][j+1] = true;
//                                         ans.push_back({{i + 1, j}, 4});
//                                 }
//                         }
//                 }
//         }
//         cout << ans.size() << '\n';
//         for (auto z : ans) {
//                 cout << z.fi.fi << ' ' << z.fi.se << ' ' << z.se << '\n';
//         }
//         return 0;
// }
#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
int n, m;
vector<vector<pair<pair<int, int>, int>>> ans;
vector<pair<pair<int, int>, int>> best;
vector<pair<pair<int, int>, int>> bruh;
vector<pair<int, int>> cur;
vector<vector<int>> v(1111, vector<int>(1111));
vector<vector<bool>> vis(1111, vector<bool>(1111, false));
vector<bool> done(15, false);
vector<pair<int, int>> zz(15);
bool check(pair<int, int> a, pair<int, int> b, pair<int, int> c, pair<int, int> d) {
                /*
                a b c
                  d
                */
                if (a.fi == b.fi && b.fi == c.fi && d.fi == b.fi + 1 && a.se + 1 == b.se && b.se + 1 == c.se && b.se == d.se) {
                        return 1;
                }
                /*
                  a
                d b
                  c
                */
                if (a.fi + 1 == b.fi && b.fi + 1 == c.fi && d.fi == b.fi && a.se == b.se && b.se == c.se && d.se + 1 == b.se) {
                        return 2;
                }
                /*
                  d
                a b c
                */
                if (a.fi == b.fi && b.fi == c.fi && d.fi + 1 == b.fi && a.se + 1 == b.se && b.se + 1 == c.se && d.se == b.se) {
                        return 3;
                }
                /*
                a
                b d
                c
                */
                if (a.fi + 1 == b.fi && b.fi + 1 == c.fi && b.fi == d.fi && a.se == b.se && b.se == c.se && b.se + 1 == d.se) {
                        return 4;
                }
                return -1;

}
void coba4(int x) {
        if (x == 5) {
                if (check(zz[1], zz[2], zz[3], zz[4]) != -1) {
                        bruh.push_back({{zz[2].fi, zz[2].se}, check(zz[1], zz[2], zz[3], zz[4])});
                }
                if (bruh.size() > best.size()) {
                        best = bruh;
                }
                bruh.clear();
                return;
        }
        for (int i = 0; i < cur.size(); i++) {
                if (!done[i]) {
                        done[i] = true;
                        zz[x] = cur[i];
                        coba4(x + 1);
                        done[i] = false;
                }
        }
}
void coba8(int x) {
        if (x == 9) {
                if (check(zz[1], zz[2], zz[3], zz[4]) != -1) {
                        bruh.push_back({{zz[2].fi, zz[2].se}, check(zz[1], zz[2], zz[3], zz[4])});
                }
                if (check(zz[5], zz[6], zz[7], zz[8]) != -1) {
                        bruh.push_back({{zz[6].fi, zz[6].se}, check(zz[5], zz[6], zz[7], zz[8])});
                }
                if (bruh.size() > best.size()) {
                        best = bruh;
                }
                bruh.clear();
                return;
        }
        for (int i = 0; i < cur.size(); i++) {
                if (!done[i]) {
                        done[i] = true;
                        zz[x] = cur[i];
                        coba8(x + 1);
                        done[i] = false;
                }
        }
}
void coba() {
        if (cur.size() >= 4) coba4(1);
        if (cur.size() >= 8) coba8(1);
}
void bfs(int x, int y) {
        if (x < 1 || x > n || y < 1 || y > m) return;
        if (vis[x][y]) return;
        vis[x][y] = true;
        if (v[x][y] == 0) cur.push_back({x, y});
        else return;
        bfs(x-1, y);
        bfs(x, y-1);
        bfs(x+1, y);
        bfs(x, y+1);
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("aufanmantap.txt", "w", stdout);
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        char c;
                        cin >> c;
                        v[i][j] = c - '0';
                }
        }
        cout << "hi\n";
        // int sum = 0;
        // for (int i = 1; i <= n; i++) {
        //         for (int j = 1; j <= m; j++) {
        //                 if (!vis[i][j] && v[i][j] == 0) {
        //                         cur.clear();
        //                         bfs(i, j);
        //                         coba();
        //                         sum += best.size();
        //                         ans.push_back(best);
        //                 }
        //         }
        // }
        // cout << sum << '\n';
        // for (auto z : ans) {
        //         for (auto zz : z) {
        //                 cout << zz.fi.fi << ' ' << zz.fi.se << ' ' << zz.se << '\n';
        //         }
        // }
        return 0;
}