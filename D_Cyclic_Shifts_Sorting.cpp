#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<pair<int, pair<int, int>>> v(n+5);
                for (int i = 1; i <= n; i++) {
                        cin >> v[i].fi;
                        v[i].se.fi = i;
                }
                sort(v.begin() + 1, v.begin() + n + 1);
                for (int i = 1; i <= n; i++) {
                        v[i].se.se = i;
                }
                vector<int> zz(n+5);
                vector<int> pos(n+5);
                for (int i = 1; i <= n; i++) {
                        zz[v[i].se.fi] = v[i].se.se;
                        pos[v[i].se.se] = v[i].se.fi;
                }
                {
                        queue<int> q;
                        for (int i = 1; i <= n - 2; i++) {
                                while (pos[i] - i > 1) {
                                        q.push(pos[i] - 2);
                                        swap(zz[pos[i]], zz[pos[i] - 1]);
                                        swap(zz[pos[i] - 1], zz[pos[i] - 2]);
                                        int zzz = pos[i];
                                        pos[zz[zzz]] = zzz;
                                        pos[zz[zzz - 1]] = zzz - 1;
                                        pos[zz[zzz - 2]] = zzz - 2;
                                }
                                if (pos[i] - i == 1) {
                                        q.push(pos[i] - 1);
                                        q.push(pos[i] - 1);
                                        swap(zz[pos[i] - 1], zz[pos[i]]);
                                        swap(zz[pos[i]], zz[pos[i] + 1]);
                                        int zzz = pos[i];
                                        pos[zz[zzz - 1]] = zzz - 1;
                                        pos[zz[zzz]] = zzz;
                                        pos[zz[zzz + 1]] = zzz + 1;
                                }
                        }
                        if (zz[n] == n) {
                                cout << q.size() << '\n';
                                while (!q.empty()) {
                                        cout << q.front() << ' ';
                                        q.pop();
                                }
                                cout << '\n';
                                goto Next;
                        }
                }
                for (int i = 1; i <= n; i++) {
                        zz[v[i].se.fi] = v[i].se.se;
                        pos[v[i].se.se] = v[i].se.fi;
                }
                {
                        for (int i = 1; i <= n; i++) {
                                for (int j = i + 1; j <= n; j++) {
                                        if (v[i].fi == v[j].fi) {
                                                swap(zz[v[i].se.fi], zz[v[j].se.fi]);
                                                swap(pos[v[i].se.se], pos[v[j].se.se]);
                                                goto Nxt;
                                        }
                                }
                        }
                        Nxt:;
                        queue<int> q;
                        for (int i = 1; i <= n - 2; i++) {
                                while (pos[i] - i > 1) {
                                        q.push(pos[i] - 2);
                                        swap(zz[pos[i]], zz[pos[i] - 1]);
                                        swap(zz[pos[i] - 1], zz[pos[i] - 2]);
                                        int zzz = pos[i];
                                        pos[zz[zzz]] = zzz;
                                        pos[zz[zzz - 1]] = zzz - 1;
                                        pos[zz[zzz - 2]] = zzz - 2;
                                }
                                if (pos[i] - i == 1) {
                                        q.push(pos[i] - 1);
                                        q.push(pos[i] - 1);
                                        swap(zz[pos[i] - 1], zz[pos[i]]);
                                        swap(zz[pos[i]], zz[pos[i] + 1]);
                                        int zzz = pos[i];
                                        pos[zz[zzz - 1]] = zzz - 1;
                                        pos[zz[zzz]] = zzz;
                                        pos[zz[zzz + 1]] = zzz + 1;
                                }
                        }
                        if (zz[n] == n) {
                                cout << q.size() << '\n';
                                while (!q.empty()) {
                                        cout << q.front() << ' ';
                                        q.pop();
                                }
                                cout << '\n';
                                goto Next;
                        }
                }
                cout << "-1\n";
                Next:;
        }
        return 0;
}