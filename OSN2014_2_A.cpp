#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string subsoal;
        cin >> subsoal;
        int n;
        cin >> n;
        vector<int> v(n);
        vector<bool> zz(1111111, false);
        for (int i = 0; i < n; i++) {
                cin >> v[i];
                v[i] += 2500;
                zz[v[i]] = true;
        }
        sort(all(v));
        int ans = n - 1;
        int mx = v[n-1];
        for (int i = 0; i < n; i++) {
                for (int j = 1; j <= 5000; j++) {
                        int cnt = 1;
                        int brr = 1;
                        for (int k = j;; k+=j) {
                                if (v[i] + k <= mx) {
                                        if (zz[v[i] + k]) cnt++;
                                } else {
                                        goto Next;
                                }
                                brr++;
                                ans = min(ans, brr - cnt + (n - cnt));
                        }
                        Next:;
                }
        }
        cout << ans << '\n';
        return 0;
}