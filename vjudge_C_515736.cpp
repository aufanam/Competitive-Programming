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
        int n;
        cin >> n;
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
                cin >> v[i];
        }
        sort(all(v));
        if (v[n-1] - v[0] <= 1) {
                cout << n << '\n';
                for (auto z : v) {
                        cout << z << ' ';
                }
                cout << '\n';
        } else {
                int mn = v[0];
                int mx = v[n-1];
                for (int i = 0; i < n; i++) {
                        if (v[i] == mn) cnt1++;
                        else if (v[i] == mx) cnt3++;
                        else cnt2++;
                }
                int zx = min(cnt1, cnt3);
                int fd = cnt2/2;
                if (zx > fd) {
                        cnt1 -= zx;
                        cnt3 -= zx;
                        cnt2 += 2*zx;
                } else {
                        cnt1 += fd;
                        cnt3 += fd;
                        cnt2 -= 2*fd;
                }
                cout << n - 2*max(zx, fd) << '\n';
                for (int i = 0; i < cnt1; i++) {
                        cout << mn << ' ';
                }
                for (int i = 0; i < cnt2; i++) {
                        cout << mn + 1 << ' ';
                }
                for (int i = 0; i < cnt3; i++) {
                        cout << mx << ' ';
                }
                cout << '\n';
        }
        return 0;
}