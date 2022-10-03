#include <bits/stdc++.h>
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
void solve() {
        // kiddo
        int n, m;
        cin >> n >> m;
        vector<unordered_set<int>> v(n);
        for (int i = 0; i < m; i++) {
                int a, b;
                cin >> a >> b;
                a--;
                b--;
                v[a].insert(b);
                v[b].insert(a);
        }
        set<int> unvis;
        for (int i = 0; i < n; i++) unvis.insert(i);
        vector<vector<int>> ans;
        vector<int> temp;
        for (int i = 0; i < n; i++) {
                if (unvis.count(i)) {
                        queue<int> q;
                        temp.push_back(i);
                        q.push(i);
                        unvis.erase(i);
                        while (!q.empty()) {
                                int x = q.front();
                                q.pop();
                                auto it = unvis.begin();
                                while (it != unvis.end()) {
                                        if (!v[x].count(*it)) {
                                                q.push(*it);
                                                temp.push_back(*it);
                                                unvis.erase(it++);
                                        } else {
                                                it++;
                                        }
                                }
                        }
                        ans.push_back(temp);
                        temp.clear();
                }
        }
        cout << ans.size() << '\n';
        for (auto z : ans) {
                cout << z.size() << ' ';
                for (auto zz : z) cout << zz + 1 << ' ';
                cout << '\n';
        }
        return;
}

int32_t main()
{
        Aufan
        cout.tie(NULL);
        slv
        return 0;
}