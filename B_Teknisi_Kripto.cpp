#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int INFF = 1e18;
vector<vector<pair<int, int>>> v(1111);
vector<vector<vector<int>>> dist(1111, vector<vector<int>>(1111, vector<int>(2, INFF)));
void dijkstra(int st) {
        dist[st][st][0] = 0;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {st, 0}});
        while (!pq.empty()) {
                auto p = pq.top();
                pq.pop();
                if (dist[st][p.se.fi][p.se.se] < p.fi) continue;
                for (auto z : v[p.se.fi]) {
                        if (z.se == 0) {
                                if (z.se + p.fi < dist[st][z.fi][p.se.se]) {
                                        dist[st][z.fi][p.se.se] = z.se + p.fi;
                                        pq.push({dist[st][z.fi][p.se.se], {z.fi, p.se.se}});
                                }
                        } else if (p.se.se == 0) {
                                if (z.se + p.fi < dist[st][z.fi][p.se.se + 1]) {
                                        dist[st][z.fi][p.se.se + 1] = z.se + p.fi;
                                        pq.push({dist[st][z.fi][p.se.se + 1], {z.fi, p.se.se + 1}});
                                }
                        }
                }
        }
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                v[a].push_back({b, d});
                v[b].push_back({a, d});
        }
        for (int i = 1; i <= n; i++) dijkstra(i);
        vector<int> zz;
        // for (int i = 1; i <= n; i++) {
        //         for (int j = 1; j <= n; j++) {
        //                 cout << min(dist[i][j][0], dist[i][j][1]) << ' ';
        //         }
        //         cout << '\n';
        // }
        for (int i = 1; i <= n; i++) {
                int mx = -1;
                for (int j = 1; j <= n; j++) {
                        mx = max(mx, min(dist[i][j][0], dist[i][j][1]));
                }
                // cout << mx << '\n';
                zz.push_back(mx);
        }
        sort(all(zz));
        for (int i = 0; i < n; i++) {
                cout << (zz[i] == INFF ? -1 : zz[i]) << " \n"[i == n - 1];
        }
        // cout << "HI\n";
        return 0;
}