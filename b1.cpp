#include <bits/stdc++.h>

using namespace std;

int main() 
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long p, q, r;
        cin >> p >> q >> r;
        long long n;
        cin >> n;
        for (long long i = 0; i < n; i++) {
                long long x;
                cin >> x;
                if (x%p == 0 && x%q == 0 && x%r == 0) {
                        cout << "YA\n";
                } else {
                        cout << "TIDAK\n";
                }
        }
        return 0;
}