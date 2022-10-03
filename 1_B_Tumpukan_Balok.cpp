#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int INFF = 1e18;
int n;
vector<int> h(222222);
vector<int> mintree(2222222);
map<int, vector<int>> mapan;
void build(int idx = 1, int st = 1, int en = n) {
        if (st == en) {
                mintree[idx] = h[st];
                return;
        }
        int lf = 2*idx + 1;
        int rg = lf + 1;
        int md = st + (en - st)/2;
        build(lf, st, md);
        build(rg, md + 1, en);
        mintree[idx] = min(mintree[lf], mintree[rg]);
}
int query(int l, int r, int idx = 1, int st = 1, int en = n) {
        if (st > r || en < l) return INFF;
        if (l <= st && en <= r) return mintree[idx];
        int lf = 2*idx + 1;
        int rg = lf + 1;
        int md = st + (en - st)/2;
        return min(query(l, r, lf, st, md), query(l, r, rg, md + 1, en));
}
int zz = 0;
vector<int> mv;
vector<pair<int, int>> rng;
void bagi(int sum, int l, int r) {
        if (l > r) return;
        int z = query(l, r);
        int hf = z - sum;
        zz += (r - l + 1)*hf;
        mv.push_back(zz);
        rng.push_back({l, r});
        vector<int> batas;
        batas.push_back(l - 1);
        int left;
        int right;
        {
                int lf = 0;
                int rg = mapan[z].size() - 1;
                while (lf <= rg) {
                        int md = (lf + rg)/2;
                        if (mapan[z][md] >= l) {
                                left = md;
                                rg = md - 1;
                        } else {
                                lf = md + 1;
                        }
                }
        }
        {
                int lf = 0;
                int rg = mapan[z].size() - 1;
                while (lf <= rg) {
                        int md = (lf + rg)/2;
                        if (mapan[z][md] <= r) {
                                right = md;
                                lf = md + 1;
                        } else {
                                rg = md - 1;
                        }
                }
        }
        for (int i = left; i <= right; i++) {
                batas.push_back(mapan[z][i]);
        }
        batas.push_back(r + 1);
        for (int i = 0; i < batas.size() - 1; i++) {
                bagi(sum + hf, batas[i] + 1, batas[i+1] - 1);
        }
        return;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> n;
        for (int i = 1; i <= n; i++) {
                cin >> h[i];
                mapan[h[i]].push_back(i);
        }
        build();
        bagi(0, 1, n);
        // for (auto z : mv) {
        //         cout << z << ' ';
        // }
        // cout << '\n';
        // for (auto z : rng) {
        //         cout << z.fi << ' ' << z.se << '\n';
        // }
        int q;
        cin >> q;
        while (q--) {
                int x;
                cin >> x;
                int lf = 0;
                int rg = mv.size() - 1;
                int pos;
                while (lf <= rg) {
                        int md = (lf + rg)/2;
                        if (x <= mv[md]) {
                                pos = md;
                                rg = md - 1;
                        } else {
                                lf = md + 1;
                        }
                }
                // cout << pos << '\n';
                int z = x - (pos > 0 ? mv[pos-1] : 0);
                int b = ((z - 1)%(rng[pos].se - rng[pos].fi + 1) + 1);
                cout << rng[pos].fi - 1 + b << '\n';
        }
        return 0;
}