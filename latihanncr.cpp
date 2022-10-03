#include <bits/stdc++.h>

using namespace std;
const long long MOD = 1e9 + 7;
long long fac[1000069];
long long modin[1000069];
long long power(long long x, long long y) {
        long long res = 1;
        x = x%MOD;
        while (y > 0) {
                if (y&1)
                        res = (res*x)%MOD;
                y >>= 1;
                x = (x*x)%MOD;
        }
        return res;
}
long long modInverse(long long x) {
        return power(x, MOD - 2);
}
long long nCr(long long n, long long r) {
        if (n < r) 
                return 0;
        if (r == 0)
                return 1;
        return (fac[n] * modin[r] % MOD * modin[n-r] % MOD) % MOD;
}
void generatefac() {
        fac[0] = 1;
        modin[0] = modInverse(1);
        for (long long i = 1; i <= 1000000; i++) {
                fac[i] = (fac[i-1]*i)%MOD;
                modin[i] = modInverse(fac[i]);
        }
}
int main()
{
        long long a, b, c;
        a = b = c = 1;
        for (int i = 1; i <= 1000; i++) {
                a = (a*i)%MOD;
        }
        for (int i = 1; i <= 288; i++) {
                b = (b*i)%MOD;
        }
        for (int i = 1; i <= 712; i++) {
                c = (c*i)%MOD;
        }
        cout << a * modInverse(b) % MOD * modInverse(c) % MOD << '\n';
        generatefac();  
        cout << nCr(1000, 288) << '\n';
        return 0;
}