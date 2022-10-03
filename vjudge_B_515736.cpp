#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
const int INF = 1e9;
using namespace std;
bool cmplf(pair<pair<int, int>, int> x, pair<pair<int, int>, int> y) {
        return x.fi.se < y.fi.se;
}
bool cmprg(pair<pair<int, int>, int> x, pair<pair<int, int>, int> y) {
        return x.fi.se > y.fi.se;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        vector<pair<pair<int, int>, int>> lf;
        vector<pair<pair<int, int>, int>> rg;
        for (int i = 1; i <= n; i++) {
                int l, r;
                cin >> l >> r;
                if (l > r) {
                        lf.push_back({{l, r}, i});
                } else if (r > l) {
                        rg.push_back({{l, r}, i});
                }
        }
        sort(all(lf), cmplf);
        vector<int> finlf;
        int lst = -INF;
        for (int i = 0; i < lf.size(); i++) {
                if (lf[i].fi.fi > lst) {
                        finlf.push_back(lf[i].se);
                        lst = lf[i].fi.se;
                }
        }
        sort(all(rg), cmprg);
        vector<int> finrg;
        lst = INF;
        for (int i = 0; i < rg.size(); i++) {
                if (rg[i].fi.fi < lst ) { 
                        finrg.push_back(rg[i].se);
                        lst = rg[i].fi.se;
                }       
        }
        if (finlf.size() > finrg.size()) {
                cout << finlf.size() << '\n';
                for (auto z : finlf) {
                        cout << z << ' ';
                }
                cout << '\n';
        } else {
                cout << finrg.size() << '\n';
                for (auto z : finrg) {
                        cout << z << ' ';
                }
                cout << '\n';
        }
        return 0;
}