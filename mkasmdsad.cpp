#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
vector<vector<int>> v(1111, vector<int>(1111, 1));
vector<vector<bool>> vis(1111, vector<bool>(1111, false));
bool check1(int x, int y) {
        if (v[x][y] == 0 && v[x][y-1] == 0 && v[x][y+1] == 0 && v[x+1][y] == 0) {
                v[x][y] = 1;
                v[x][y-1] = 1;
                v[x][y+1] = 1;
                v[x+1][y] = 1;
                return true;
        }
        return false;
}
bool check2(int x, int y) {
        if (v[x][y] == 0 && v[x-1][y] == 0 && v[x+1][y] == 0 && v[x][y-1] == 0) {
                v[x][y] = 1;
                v[x-1][y] = 1;
                v[x+1][y] = 1;
                v[x][y-1] = 1;
                return true;
        }
        return false;
}
bool check3(int x, int y) {
        if (v[x][y] == 0 && v[x][y-1] == 0 && v[x][y+1] == 0 && v[x-1][y] == 0) {
                v[x][y] = 1;
                v[x][y-1] = 1;
                v[x][y+1] = 1;
                v[x-1][y] = 1;
                return true;
        }
        return false;
}
bool check4(int x, int y) {
        if (v[x][y] == 0 && v[x-1][y] == 0 && v[x+1][y] == 0 && v[x][y+1] == 0) {
                v[x][y] = 1;
                v[x-1][y] = 1;
                v[x+1][y] = 1;
                v[x][y+1] = 1;
                return true;
        }
        return false;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("aufanmantap.txt", "w", stdout);
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        char c;
                        cin >> c;
                        v[i][j] = c - '0';
                        if (v[i][j] == 0) cnt++;
                }
        }
        vector<pair<pair<int, int>, int>> ans;
        int cur = 0;
        while (cur < cnt) {
                int aw = cur;
                bool ok = false;
                for (int i = 1; i <= n; i++) {
                        for (int j = 1; j <= n; j++) {
                                int z = v[i-1][j] + v[i+1][j] + v[i][j-1] + v[i][j+1];
                                if (z == 3) {
                                        if (v[i-1][j] == 0) {
                                                if (check1(i-1, j)) {
                                                        ans.push_back({{i-1, j}, 1});
                                                        ok = true;
                                                        cur++;
                                                } else if (check2(i-1, j)) {
                                                        ans.push_back({{i-1, j}, 2});
                                                        ok = true;
                                                        cur++;
                                                } else if (check4(i-1, j)) {
                                                        ans.push_back({{i-1, j}, 4});
                                                        ok = true;
                                                        cur++;
                                                }
                                        } else if (v[i][j-1] == 0) {
                                                if (check4(i, j-1)) {
                                                        ans.push_back({{i, j-1}, 4});
                                                        ok = true;
                                                        cur++;
                                                } else if (check1(i, j-1)) {
                                                        ans.push_back({{i, j-1}, 1});
                                                        ok = true;
                                                        cur++;
                                                } else if (check3(i, j-1)) {
                                                        ans.push_back({{i, j-1}, 3});
                                                        ok = true;
                                                        cur++;
                                                }
                                        } else if (v[i][j+1] == 0) {
                                                if (check2(i, j+1)) {
                                                        ans.push_back({{i, j+1}, 2});
                                                        ok = true;
                                                        cur++;
                                                } else if (check3(i, j + 1)) {
                                                        ans.push_back({{i, j+1}, 3});
                                                        ok = true;
                                                        cur++;
                                                } else if (check1(i, j + 1)) {
                                                        ans.push_back({{i, j+1}, 1});
                                                        ok = true;
                                                        cur++;
                                                }
                                        } else if (v[i+1][j] == 0) {
                                                if (check3(i+1, j)) {
                                                        ans.push_back({{i+1, j}, 3});
                                                        ok = true;
                                                        cur++;
                                                } else if (check4(i+1, j)) {
                                                        ans.push_back({{i+1, j}, 4});
                                                        ok = true;
                                                        cur++;
                                                } else if (check2(i+1, j)) {
                                                        ans.push_back({{i+1, j}, 2});
                                                        ok = true;
                                                        cur++;
                                                }
                                        }
                                }
                        }
                }
                if (ok) continue;
                for (int i = 1; i <= n; i++) {
                        for (int j = 1; j <= m; j++) {  
                                if (i <= n - 2 && j >= 2) {
                                        if (!v[i][j] && !v[i+1][j] && !v[i+2][j] && !v[i+1][j-1]) {
                                                v[i][j] = 1;
                                                v[i+1][j] = 1;
                                                v[i+2][j] = 1;
                                                v[i+1][j-1] = 1;
                                                ans.push_back({{i + 1, j}, 2});
                                                cur++;
                                        }
                                }
                                if (i <= n - 1 && j <= m - 2) {
                                        if (!v[i][j] && !v[i][j+1] && !v[i][j+2] && !v[i+1][j+1]) {
                                                v[i][j] = 1;
                                                v[i][j+1] = 1;
                                                v[i][j+2] = 1;
                                                v[i+1][j+1] = 1;
                                                ans.push_back({{i, j + 1}, 1});
                                                cur++;
                                        }
                                }
                                if (i <= n - 2 && j <= m - 1) {
                                        if (!v[i][j] && !v[i+1][j] && !v[i+2][j] && !v[i+1][j+1]) {
                                                v[i][j] = 1;
                                                v[i+1][j] = 1;
                                                v[i+2][j] = 1;
                                                v[i+1][j+1] = 1;
                                                ans.push_back({{i + 1, j}, 4});
                                                cur++;
                                        }
                                }
                                if (i >= 2 && j <= m - 2) {
                                        if (!v[i][j] && !v[i][j+1] && !v[i][j+2] && !v[i-1][j+1]) {
                                                v[i][j] = 1;
                                                v[i][j+1] = 1;
                                                v[i][j+2] = 1;
                                                v[i-1][j+1] = 1;
                                                ans.push_back({{i, j + 1}, 3});
                                                cur++;
                                        }
                                }
                        }
                }
                if (aw == cur) break;
        }
        cout << ans.size() << '\n';
        for (auto z : ans) {
                cout << z.fi.fi << ' ' << z.fi.se << ' ' << z.se << '\n';
        }
        return 0;
}