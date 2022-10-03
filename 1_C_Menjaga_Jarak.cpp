#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
using namespace std;
const int INF = 1e18;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n+5);
        for (int i = 1; i <= n; i++) {
                cin >> v[i];
        }
        vector<vector<int>> dp(n+5, vector<int>(k+5, INF));
        dp[0][0] = 0;
        return 0;
}