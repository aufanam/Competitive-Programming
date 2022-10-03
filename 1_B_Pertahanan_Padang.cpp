#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int INFF = 1e18;
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        /*
        1 0 -> 1 1
        1 0 1 -> 3 1
        1 0 1 0 -> 3 4
        1 0 1 0 1 -> 8 4
        s = {3, 4};
        s + '0' = {3, 4 + 3};
        s + '1' = {3 + 4 + 1, 4};
        */
        string subsoal;
        cin >> subsoal;
        int a, b, q;
        cin >> a >> b >> q;
        vector<pair<int, int>> zz;
        while (a > 0) {
                if (a > b) {
                        zz.push_back({a/(b + 1), 1});
                        a %= (b + 1);
                } else {
                        zz.push_back({b/a, 0});
                        b %= a;
                }
        }
        if (b > 0) {
                cout << "TIDAK MUNGKIN\n";
                return 0;
        }
        cout << "MUNGKIN\n";
        reverse(all(zz));
        vector<pair<int, int>> kk(zz.size() + 1);
        kk[0] = {0, zz[0].se};
        for (int i = 1; i < zz.size(); i++) {
                kk[i] = {kk[i-1].fi + zz[i-1].fi, zz[i].se};
        }
        int sz = kk[zz.size() - 1].fi + zz.back().fi;
        // for (auto z : kk) {
        //         cout << z.fi <<  ' ' << z.se << '\n';
        // }
        kk[zz.size()] = {INFF, 2};
        while (q--) {
                int l, r;
                cin >> l >> r;
                if (r > sz - 1) cout << "DI LUAR BATAS\n";
                else {
                        int p;
                        int lf = 0;
                        int rg = kk.size() - 1;
                        while (lf <= rg) {
                                int md = (lf + rg)/2;
                                if (kk[md].fi <= l) {
                                        p = md;
                                        lf = md + 1;
                                } else {
                                        rg = md - 1;
                                }
                        }
                        // cout << left << ' ' << right << '\n';
                        for (int i = l; i <= r; i++) {
                                if (i >= kk[p+1].fi) {
                                        p++;
                                }
                                cout << kk[p].se;
                        }
                        cout << '\n';
                }
        }
        return 0;
}