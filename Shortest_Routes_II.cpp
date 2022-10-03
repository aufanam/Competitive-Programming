#include <iostream>
#include <vector>
#include <queue>
#define int                                                             long long
#define fi                                                              first
#define se                                                              second
const int INFF = 2e18;
using namespace std;
vector<vector<pair<int, int>>> v(555);
vector<vector<int>> dist(555, vector<int>(555, INFF));
void dijkstra(int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, x});
        dist[x][x] = 0;
        while (!pq.empty()) { 
                pair<int, int> p = pq.top();
                pq.pop();
                if (dist[x][p.se] < p.fi) continue;
                for (auto z : v[p.se]) {
                        if (p.fi + z.se < dist[x][z.fi]) {
                                dist[x][z.fi] = z.se + p.fi;
                                pq.push({dist[x][z.fi], z.fi});
                        }
                }
        }
}
void solve() {
        int n, m, q;
        cin >> n >> m >> q;
        for (int i = 1; i <= m; i++) {
                int a, b, c;
                cin >> a >> b >> c;
                v[a].push_back({b, c});
                v[b].push_back({a, c});
        }
        for (int i = 1; i <= n; i++) dijkstra(i);
        while (q--) {
                int a, b;
                cin >> a >> b;
                if (dist[a][b] != INFF) cout << dist[a][b] << '\n';
                else cout << "-1\n";
        }
        return;
}

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
}