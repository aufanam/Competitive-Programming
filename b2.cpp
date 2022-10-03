#include <bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long k;
        cin >> k;
        vector<pair<long long, long long>> v(k+5);
        for (long long i = 1; i <= k; i++) {
                cin >> v[i].second;
        }
        for (long long i = 1; i <= k; i++) {
                cin >> v[i].first;
        }
        sort(v.begin() + 1, v.begin() + k + 1);
        long long n;
        cin >> n;
        vector<long long> bebek(n+5);
        for (long long i = 1; i <= n; i++) {
                cin >> bebek[i];
        }
        sort(bebek.begin() + 1, bebek.begin() + n + 1, greater<long long>());
        long long p = 0;
        long long ans = 0;
        for (long long i = 1; i <= k; i++) {
                long long z = min(v[i].second, n - p);
                for (long long j = p + 1; j <= p + z; j++) {
                        ans += bebek[j]*v[i].first;
                }
                p += z;
        }
        cout << ans << '\n';
        return 0;
}