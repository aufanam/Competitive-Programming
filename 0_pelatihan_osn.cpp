#include <bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n;
        cin >> n;
        vector<vector<pair<long long, long long>>> v(20007);
        for (long long i = 0; i < n; i++) {
                long long a, b, c;
                cin >> a >> b >> c;
                v[b].push_back({a, c});
        }
        vector<long long> dp(20007);
        dp[0] = 0;
        for (long long i = 1; i <= 20000; i++) {
                dp[i] = dp[i-1];
                for (auto [a, c] : v[i]) {
                        dp[i] = max(dp[i], dp[a-1] + c);
                }
        }
        cout << dp[20000] << '\n';
        return 0;
}