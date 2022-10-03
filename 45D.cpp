#include <bits/stdc++.h>
#define fi                                                              first
#define se                                                              second
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
void solve() {
        int n;
        cin >> n;
        vector<pair<pair<int, int>, int>> zz;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
                int l, r;
                cin >> l >> r;
                zz.push_back({{r, l}, i});
        }
        int p = 0;
        map<int, bool> mapan;
        sort(zz.begin(), zz.end());
        for (int i = 0; i < n; i++) {
                for (int j = zz[i].fi.se; j <= zz[i].fi.fi; j++) {
                        if (mapan[j] != true) {
                                mapan[j] = true;
                                ans[zz[i].se] = j;
                                goto Next;
                        }
                }
                Next:;
        }
        for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];  
        return;
}

int32_t main()
{
        Aufan
        slv
        return 0;
}