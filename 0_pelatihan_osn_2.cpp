#include <bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) cin >> v[i];
        for (long long i = 1; i < n; i++) v[i] += v[i-1];
        for (long long i = 0; i < k; i++) {
                long long x;
                cin >> x;
                cout << upper_bound(v.begin(), v.end(), x) - v.begin() << '\n';
        }
        return 0;
}