#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fi                                                              first
#define se                                                              second
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
string balik(string s)                                                  {reverse(s.begin(),s.end());return s;}
const int INF=2e9;
int n, m;
vector<vector<char>> v(222, vector<char>(222));
vector<pair<int, int>> poss;
vector<pair<int, int>> post;
vector<vector<vector<bool>>> viss(222, vector<vector<bool>>(222, vector<bool>(222, false)));
vector<vector<vector<bool>>> vist(222, vector<vector<bool>>(222, vector<bool>(222, false)));
bool bull = false;
string s, t;
int cntts = 0;
int cnttt = 0;
void rec1(int x, int y, int cnt, string xx, int fin, int st, int en) {
        if (x < 0 || y < 0 || x > n || y > m) return;
        if (xx == s && viss[x][y][cnt]) return;
        if (xx == t && vist[x][y][cnt]) return;
        if (xx == s) viss[x][y][cnt] = true;
        if (xx == t) vist[x][y][cnt] = true;
        if (v[x][y] == xx[cnt]) cnt++;
        else return;
        if (cnt == fin) {
                if (xx == s) poss.push_back({x, y});
                if (xx == t) post.push_back({st, en});
                return;
        }
        rec1(x + 1, y, cnt, xx, fin, st, en);
        rec1(x - 1, y, cnt, xx, fin, st, en);
        rec1(x, y + 1, cnt, xx, fin, st, en);
        rec1(x, y - 1, cnt, xx, fin, st, en);
}
void solve() {
        string subsoal;
        cin >> subsoal;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        char c;
                        cin >> c;
                        v[i][j] = c;
                }
        }
        cin >> s >> t;
        if (s == t) {
                cout << s.length() << '\n';
                return;
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        rec1(i, j, 0, s, s.length(), i, j);
                        rec1(i, j, 0, balik(t), t.length(), i, j);
                }
        }
        int ans = INF;
        for (int i = 1; i <= s.length(); i++) {
                for (int ki = 1; ki <= n; ki++) {
                        for (int kj = 1; kj <= m; kj++) {
                                if (viss[ki][kj][i] && vist[ki][kj][i]) {
                                        ans = min(ans, i + (int)t.length() - 1);
                                }
                        }
                }
        }
        for (int i = 0; i < poss.size(); i++) {
                for (int j = 0; j < post.size(); j++) {
                        int res = s.length() + t.length() + abs(post[j].fi - poss[i].fi) + abs(post[j].se - poss[i].se) - 1;
                        ans = min(ans, res);
                }
        }
        if (ans == INF) cout << "-1\n";
        else cout << ans << '\n';
        return;
}

int32_t main()
{
        Aufan
        slv
        return 0;
}