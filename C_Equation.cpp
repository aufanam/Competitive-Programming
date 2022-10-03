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
        int l, r;
        cin >> l >> r;
        if (l <= -1 && -1 <= r) {
                cout << "-1\n";
                return 0;
        }
        int ans = 0;
        int lf = abs(l + 1);
        int rg = abs(r + 1);
        if (lf > rg) swap(lf, rg);
        lf--;
        int anslf = 0;
        int cnt = 0;
        for (int i = 1; i*i <= lf; i++) {
                anslf += (((lf - i*i)/i) + 1);
                cnt++;
        }
        anslf *= 2;
        anslf -= cnt;
        int ansrg = 0;
        cnt = 0;
        for (int i = 1; i*i <= rg; i++) {
                ansrg += (((rg - i*i)/i) + 1);
                cnt++;
        }
        ansrg *= 2;
        ansrg -= cnt;
        ans = ansrg - anslf;
        if (r >= 0) {
                for (int i = 1; i <= 1000000; i++) {
                        if (lf < i*i && i*i <= rg) {
                                ans++;
                        }
                }
        }
        cout << ans << '\n';
        return 0;
}