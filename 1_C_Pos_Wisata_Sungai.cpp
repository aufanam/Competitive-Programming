#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
using namespace std;
const int MOD = 1e9 + 7;
int fac[1111111];
int modin[1111111];
int power(int x, int y) {
        int res = 1;
        while (y > 0) {
                if (y & 1) {
                        res = (res * x)%MOD;
                }
                y >>= 1;
                x = (x * x)%MOD;
        }
        return res;
}
int modInverse(int x) {
        return power(x, MOD - 2);
}
int nCr(int n, int r) {
        if (n < r) return 0;
        if (r == 0) return 1;
        return fac[n] * modin[r] % MOD * modin[n-r] % MOD;
}
void generatefac() {
        fac[0] = 1;
        modin[0] = modInverse(1);
        for (int i = 1; i <= 1000000; i++) {
                fac[i] = (fac[i-1] * i)%MOD;
                modin[i] = modInverse(fac[i]);
        }
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        generatefac();
        string subsoal;
        cin >> subsoal;
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < m; i++) {
                if (s[i] == '0') cnt0++;
                if (s[i] == '1') cnt1++;
        }
        if (k >= cnt1) {
                int ans = 0;
                int z = k - cnt1;
                for (int i = z; i <= cnt0; i++) {
                        int res = (nCr(cnt0, i)*nCr(cnt1, i - z))%MOD;
                        int zx = (power(2, n)*modInverse(2))%MOD;
                        res = (res * power(zx, m))%MOD;
                        ans = (ans + res)%MOD;
                }
                cout << ans << '\n';
        } else if (k < cnt1) {
                int ans = 0;
                int z = cnt1 - k;
                for (int i = z; i <= cnt1; i++) {
                        int res = (nCr(cnt1, i)*nCr(cnt0, i - z))%MOD;
                        int zx = (power(2, n)*modInverse(2))%MOD;
                        res = (res * power(zx, m))%MOD;
                        ans = (ans + res)%MOD;
                }
                cout << ans << '\n';
        }
        return 0;
}