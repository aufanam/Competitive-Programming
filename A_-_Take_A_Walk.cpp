#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        for (int i = 1; i < n; i++) {
                int x = v[i-1] + v[i];
                if (x >= k) continue;
                else {
                        v[i] += k - x;
                        ans += k - x;
                }
        }
        cout << ans << '\n';
        for (int i = 0; i < n; i++) cout << v[i] << ' ';
        cout << '\n';
        return 0;
}