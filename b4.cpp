#include <bits/stdc++.h>

using namespace std;
const long long MOD = (long long)1e9 + 7;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n, m;
        cin >> n >> m;
        if (n == 1) {
                long long z = 2;
                for (long long i = 2; i <= m; i++) {
                        z = (z*3)%MOD;
                }
                cout << z << '\n';
        }
        return 0;
}