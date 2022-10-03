#include <bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(15);
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
                cin >> v[i];
        }
        vector<int> dp(15, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
                if (v[i]) {
                        dp[i] = dp[i-1] + dp[i-2];
                }
        }
        cout << dp[n] << '\n';
        return 0;
}