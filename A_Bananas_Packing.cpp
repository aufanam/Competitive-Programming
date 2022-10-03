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
        int n;
        cin >> n;
        vector<int> v(n+5);
        int cnt = 0;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
                cin >> v[i];
                sum += v[i];
        }
        for (int i = 1; i <= n - 6; i++) {
                int z = min({v[i], v[i+1], v[i+2], v[i+3], v[i+4], v[i+5], v[i+6]});
                for (int j = i; j <= i + 6; j++) {
                        v[j] -= z;
                }
                cnt += z;
        }
        cout << cnt << ' ' << sum - cnt*7 << '\n';
        return 0;
}