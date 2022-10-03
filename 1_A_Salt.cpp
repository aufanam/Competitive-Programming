#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
vector<int> par(222222);
int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
}
void join(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx < ry) {
                par[ry] = rx;
        } else {
                par[rx] = ry;
        }
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, m;
        cin >> n >> m;
        iota(all(par), 0);
        vector<int> p(n+5);
        p[1] = 0;
        for (int i = 2; i <= n; i++) {
                cin >> p[i];
        }
        queue<int> q;
        for (int i = 1; i <= m; i++) {
                int x;
                cin >> x;
                if (root(x) != 0) {
                        join(root(x), p[root(x)]);
                } else {
                        q.push(i);
                }
                // for (int j = 0; j <= n; j++) {
                //         cout << root(j) << ' ';
                // }
                // cout << '\n';
        }
        cout << q.size() << '\n';
        while (!q.empty()) {
                cout << q.front() << ' ';
                q.pop();
        }
        cout << '\n';
        // subsoal 5
        // set<int> buset;
        // queue<int> q;
        // for (int i = 1; i <= m; i++) {
        //         int x;
        //         cin >> x;
        //         if (i == 1) {
        //                 while (x != 0) {
        //                         buset.insert(x);
        //                         x = par[x];
        //                 }
        //                 buset.erase(*buset.rbegin());
        //         } else {
        //                 if (!buset.empty()) {
        //                         buset.erase(*buset.rbegin());
        //                 } else {
        //                         q.push(i);
        //                 }
        //         }
        // }
        // cout << q.size() << '\n';
        // while (!q.empty()) {
        //         cout << q.front() << ' ';
        //         q.pop();
        // }
        // cout << '\n';
        // subsoal 7
        // set<int> buset;
        // for (int i = 1; i <= n; i++) {
        //         buset.insert(-i);
        // }
        // queue<int> q;
        // for (int i = 1; i <= m; i++) {
        //         int x;
        //         cin >> x;
        //         auto it = buset.lower_bound(-x);
        //         if (it == buset.end()) {
        //                 q.push(i);
        //         } else {
        //                 buset.erase(it);
        //         }
        // }
        // cout << q.size() << '\n';
        // while (!q.empty()) {
        //         cout << q.front() << ' ';
        //         q.pop();
        // }
        // cout << '\n';
        // subsoal 1, 2, 3, 4
        // queue<int> q;
        // vector<bool> vis(n+5, false);
        // for (int i = 1; i <= m; i++) {
        //         int x;
        //         cin >> x;
        //         while (x != 0 && vis[x]) {
        //                 x = par[x];
        //         }
        //         if (x == 0) {
        //                 q.push(i);
        //         } else {
        //                 vis[x] = true;
        //         }
        // }
        // cout << q.size() << '\n';
        // while (!q.empty()) {
        //         cout << q.front() << ' ';
        //         q.pop();
        // }
        // cout << '\n';
        return 0;
}