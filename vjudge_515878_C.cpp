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
        int t, n, a, b, k;
        cin >> t >> n >> a >> b >> k;
        int l = 0;
        int r = t;
        int ans;
        while (l <= r) {
                int m = (l + r)/2;
                if (min(a, m)*((n+1)/2) + min(b, m)*(n/2) >= k*m) {
                        ans = m;
                        l = m + 1;
                } else {
                        r = m - 1;
                }
        }
        cout << ans << '\n';
        return 0;
}