#include <bits/stdc++.h>
#define int                                                             long long
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
#define xyz                                                             1000005
#define debug(x)                                                        cout << #x << " => " << x << "\n";
#define tc                                                              int t; cin >> t; while(t--) {solve();}
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
vector<int> p(300007);
vector<int> k(300007);
vector<int> l(300007);
void solve() {
        string s;
        cin >> s;
        int n, sd, sm;
        cin >> n >> sd >> sm;
        for (int i = 0; i < n - 1; i++) {
                cin >> p[i] >> k[i] >> l[i];
        }
        priority_queue<int> pq;
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
                if (sd >= p[i]) {
                        if (l[i] <= k[i]) {
                                ans += l[i];
                                sd++;
                        } else {
                                pq.push(k[i] - l[i]);
                                ans += k[i];
                        }
                } else {
                        while (!pq.empty() && sd < p[i]) {
                                int z = pq.top();
                                pq.pop();
                                sd++;
                                ans -= z;
                        }
                        if (sd < p[i]) {
                                cout << "-1\n";
                                return;
                        }
                        if (l[i] <= k[i]) {
                                ans += l[i];
                                sd++;
                        } else {
                                pq.push(k[i] - l[i]);
                                ans += k[i];
                        }
                }
        }
        while (sd < sm) {
                while (!pq.empty()) {
                        int z = pq.top();
                        pq.pop();
                        sd++;
                        ans -= z;
                        if (sd >= sm) break;
                }
                if (sd < sm) {
                        cout << "-1\n";
                        return;
                }
        }
        cout << ans << '\n';
        return;
}

int32_t main()
{
        Aufan
        slv  
        return 0;
}