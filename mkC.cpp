#include <bits/stdc++.h>
#define ll                                                              long long
#define ld                                                              long double
#define ull                                                             unsigned long long
#define itn                                                             int
#define sqrt                                                            sqrtl
#define cbrt                                                            cbrtl
#define pow                                                             powl
#define floor                                                           floorl
#define ceil                                                            ceill
#define fi                                                              first
#define se                                                              second
#define ckmin(a, b)                                                     a = min(a, b)
#define ckmax(a, b)                                                     a = max(a, b)
#define all(x)                                                          (x).begin(), (x).end()
#define allr(x)                                                         (x).rbegin(), (x).rend()
#define mp(a, b)                                                        make_pair(a, b)
#define N                                                               1000005
#define xyz                                                             100
#define debug(x)                                                        cout << #x << " => " << x << "\n";
#define tc                                                              int t; cin >> t; while(t--) {solve();}
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
bitset<1000007> isPrime;
const int MOD=1e9+7;
const int mod=998244353;
const int INF=2e9;

int n, m;
int stx, sty, enx, eny;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
vector<vector<int>> v(1111, vector<int>(1111));
vector<vector<int>> dist(1111, vector<int>(1111, INF));
vector<vector<bool>> vis(1111, vector<bool>(1111, false));
void dijkstra() {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        dist[stx][sty] = -1;
        vis[stx][sty] = true;
        pq.push({-1, {stx, sty}});
        while (!pq.empty()) {
                pair<int, pair<int, int>> p = pq.top();
                pq.pop();
                for (int i = 0; i < 4; i++) {
                        if ((0 <= p.se.fi + dx[i]) && (p.se.fi + dx[i] < n) && (0 <= p.se.se + dy[i]) && (p.se.se + dy[i] < m)) {
                                if (!vis[p.se.fi + dx[i]][p.se.se + dy[i]] && max(p.fi, v[p.se.fi + dx[i]][p.se.se + dy[i]]) < dist[p.se.fi + dx[i]][p.se.se + dy[i]]) {
                                        dist[p.se.fi + dx[i]][p.se.se + dy[i]] = max(p.fi, v[p.se.fi + dx[i]][p.se.se + dy[i]]);
                                        vis[p.se.fi + dx[i]][p.se.se + dy[i]] = true;
                                        pq.push({dist[p.se.fi + dx[i]][p.se.se + dy[i]], {p.se.fi + dx[i], p.se.se + dy[i]}});
                                }
                        }
                }
        }
}
void solve() {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        cin >> v[i][j];
                }
        }
        cin >> stx >> sty >> enx >> eny;
        stx--;
        sty--;
        enx--;
        eny--;
        dijkstra();
        // for (int i = 0; i < n; i++) {
        //         for (int j = 0; j < m; j++) {
        //                 cout << dist[i][j] << ' ';
        //         }
        //         cout << '\n';
        // }
        cout << dist[enx][eny] << '\n';
        return;
}

int32_t main()
{
        Aufan
        slv
        return 0;
}