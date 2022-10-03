#include <bits/stdc++.h>

using namespace std;
const long long MOD = (long long)1e9 + 7;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<bool> emyu(1555, true);
        vector<long long> primes;
        for (long long i = 2; i <= 1420; i++) {
                if (emyu[i]) {
                        primes.push_back(i);
                        for (long long j = i*i; j <= 1420; j+=i) {
                                emyu[j] = false;
                        }
                }
        }
        long long n, k, c;
        cin >> n >> k >> c;
        k -= n*c;
        if (k < 0) {
                cout << "0\n";
                return 0;
        }
        vector<long long> cnt(2222222, 0);
        long long zx = n + k - 1;
        long long fd = n - 1;
        fd = min(fd, zx - fd);
        for (long long i = zx - fd + 1; i <= zx; i++) {
                long long x = i;
                for (auto zz : primes) {
                        if (zz*zz > x) break;
                        while (x%zz == 0) {
                                x /= zz;
                                cnt[zz]++;
                        }
                }
                if (x > 1) cnt[x]++;
        }
        for (long long i = 1; i <= fd; i++) {
                long long x = i;
                for (auto zz : primes) {
                        if (zz*zz > x) break;
                        while (x%zz == 0) {
                                x /= zz;
                                cnt[zz]--;
                        }
                }
                if (x > 1) cnt[x]--;
        }
        long long ans = 1;
        for (long long i = 1; i <= 2000007; i++) {
                for (long long j = 0; j < cnt[i]; j++) {
                        ans = (ans*i)%MOD;
                }
        }
        cout << ans << '\n';
        return 0;
}