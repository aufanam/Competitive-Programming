#include <bits/stdc++.h>

using namespace std;
const long long INFF = (long long)2e18;
vector<vector<long long>> v(111111);
vector<long long> a(111111);
vector<long long> b(111111);
vector<long long> ans(111111);
void dfs(long long x, long long cost) {
        ans[x] = cost;
        for (auto z : v[x]) {
                dfs(z, cost + a[z]);
        }
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n;
        cin >> n;
        for (long long i = 1; i <= n; i++) {
                long long x, y;
                cin >> x >> y;
                if (x != -1) {
                        v[x].push_back(i);
                }
                a[i] = y;
                b[i] = x;
        }
        for (long long i = 1; i <= n; i++) {
                if (b[i] == -1) {
                        dfs(i, a[i]);
                }
        }
        long long mn = INFF;
        long long idx = -1;
        for (long long i = 1; i <= n; i++) {
                if (ans[i] <= mn) {
                        mn = ans[i];
                        idx = i;
                }
        }
        cout << idx << ' ' << mn << '\n';
        return 0;
}