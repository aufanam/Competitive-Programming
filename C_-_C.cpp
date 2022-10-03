#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e18;
int n;
vector<pair<int, int>> zz(333333);
int mdd;
int coba(int x) {
        vector<int> ok;
        for (int i = 0; i < n; i++) {
                if (zz[i].first <= x && x <= zz[i].second) {
                        ok.push_back(x);
                } else if (x < zz[i].first) {
                        ok.push_back(zz[i].first);
                } else {
                        ok.push_back(zz[i].second);
                }
        }
        vector<int> pref(n+5);
        pref[0] = 0;
        sort(ok.begin(), ok.end());
        for (int i = 0; i < n; i++) {
                pref[i+1] = pref[i] + ok[i];
        }
        vector<int> suf(n+5);
        suf[n+1] = 0;
        for (int i = n - 1; i >= 0; i--) {
                suf[i+1] = suf[i+2] + ok[i];
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
                res += (i*ok[i] - pref[i]);
                res += (suf[i+2] - (n-i-1)*ok[i]);
        }
        return res/2;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> n;
        for (int i = 0; i < n; i++) {
                int l, r;
                cin >> l >> r;
                zz[i] = {l, r};
        }
        int lf = 1;
        int rg = 10000000;
        int dif = INF;
        int ans = INF;
        int left;
        int right;
        while (lf <= rg) {
                int md = (lf + rg)/2;
                // cout << md << '\n';
                if (zx < )
                int zx = coba(md);
        }
        return 0;
}