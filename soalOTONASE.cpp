#include <bits/stdc++.h>

using namespace std;
const long long INFF = (long long)1e12 + 1;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n, k;
        cin >> n >> k;
        vector<long long> c(n);
        vector<long long> t(n);
        for (long long i = 0; i < n; i++) cin >> t[i] >> c[i];
        long long l = 0;
        long long r = INFF;
        long long ans = INFF;
        while (l <= r) {
                long long m = (l + r)/2;
                long long res = k;
                for (long long i = 0; i < n; i++) {
                        res -= (m/t[i])*c[i];
                }
                if (res <= 0) {
                        ans = m;
                        r = m - 1;
                } else {
                        l = m + 1;
                }
        }
        cout << ans << '\n';
        return 0;
}