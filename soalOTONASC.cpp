#include <bits/stdc++.h>

using namespace std;
const long long INF = (long long)2e9;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n, m;
        cin >> m >> n;
        vector<long long> b(m);
        set<long long> buset;
        buset.insert(0);
        for (long long i = 0; i < n; i++) {
                long long x;
                cin >> x;
                buset.insert(x);
                buset.insert(-x);
        }
        for (long long i = 0; i < m; i++) cin >> b[i];
        long long ans = 0;
        for (long long i = 0; i < m; i++) {
                long long x = b[i];
                long long cur = INF;
                if (buset.lower_bound(x) != buset.end()) {
                        cur = abs(x - *buset.lower_bound(x));
                }
                if (*buset.lower_bound(-x) != 0) {
                        cur = min(cur, abs(x + *buset.lower_bound(-x)));
                }
                ans += cur;
        }
        cout << ans << '\n';
        return 0;
}