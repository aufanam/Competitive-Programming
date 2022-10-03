#include <bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) cin >> v[i];
        long long z = v[0];
        for (long long i = 1; i < n; i++) {
                z = gcd(z, v[i]);
        }
        cout << z << '\n';
        return 0;
}