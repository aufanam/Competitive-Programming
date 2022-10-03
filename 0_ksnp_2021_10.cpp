#include <bits/stdc++.h>

using namespace std;

int main()
{
        vector<int> a(5555, 0);
        int n = 1000000;
        int m = 5000;
        for (int i = 0; i*i <= n; i++) {
                a[(i*i)%m]++;
        }
        for (int i = 1; i < m; i++) {
                for (int j = 1; j <= n; j*=2) {
                        for (int k = 0; k > -a[i]; k--) {
                                a[(j-k)%i]++;
                        }
                }
        }
        int ans = 0;
        for (int i = 0; i < 5000; i++) {
                ans += a[i];
        }
        cout << ans << '\n';
        return 0;
}