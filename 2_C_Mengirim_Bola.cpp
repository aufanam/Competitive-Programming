#include <bits/stdc++.h>
#define int long long 
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int INFF = 1e18;
vector<int> lefttree(888888);
vector<int> righttree(888888);
vector<int> mxtree(888888);
vector<int> lft(222222);
vector<int> rgt(222222);
vector<int> mx(222222);
void buildleft(int idx, int st, int en) {
        if (st == en) {
                lefttree[idx] = lft[st];
                return;
        }
        int l = 2*idx;
        int r = 2*idx + 1;
        int md = st + (en - st)/2;
        buildleft(l, st, md);
        buildleft(r, md + 1, en);
        lefttree[idx] = min(lefttree[l], lefttree[r]);
}
int queryleft(int l, int r, int idx, int st, int en) {
        if (st > r || en < l) return INFF;
        if (l <= st && en <= r) return lefttree[idx];
        int lf = 2*idx;
        int rg = 2*idx + 1;
        int md = st + (en - st)/2;
        return min(queryleft(l, r, lf, st, md), queryleft(l, r, rg, md + 1, en));
}
void buildright(int idx, int st, int en) {
        if (st == en) {
                righttree[idx] = rgt[st];
                return;
        }
        int l = 2*idx;
        int r = 2*idx + 1;
        int md = st + (en - st)/2;
        buildright(l, st, md);
        buildright(r, md + 1, en);
        righttree[idx] = max(righttree[l], righttree[r]);
}
int queryright(int l, int r, int idx, int st, int en) {
        if (st > r || en < l) return -INFF;
        if (l <= st && en <= r) return righttree[idx];
        int lf = 2*idx;
        int rg = 2*idx + 1;
        int md = st + (en - st)/2;
        return max(queryright(l, r, lf, st, md), queryright(l, r, rg, md + 1, en));
}
void buildmx(int idx, int st, int en) {
        if (st == en) {
                mxtree[idx] = mx[st];
                return;
        }
        int l = 2*idx;
        int r = 2*idx + 1;
        int md = st + (en - st)/2;
        buildmx(l, st, md);
        buildmx(r, md + 1, en);
        mxtree[idx] = max(mxtree[l], mxtree[r]);
}
int querymax(int l, int r, int idx, int st, int en) {
        if (st > r || en < l) return -INFF;
        if (l <= st && en <= r) return mxtree[idx];
        int lf = 2*idx;
        int rg = 2*idx + 1;
        int md = st + (en - st)/2;
        return max(querymax(l, r, lf, st, md), querymax(l, r, rg, md + 1, en));
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        vector<int> h(n+5);
        for (int i = 1; i <= n; i++) cin >> h[i];
        for (int i = 1; i <= n; i++) {
                mx[i] = h[i];
                lft[i] = i - h[i];
                rgt[i] = i + h[i];
        }
        buildmx(1, 1, n);
        buildleft(1, 1, n);
        buildright(1, 1, n);
        int q;
        cin >> q;
        while (q--) {
                int st, en;
                cin >> st >> en;
                if (st < en) {
                        int z = querymax(st, en, 1, 1, n);
                        int l = queryleft(st, en, 1, 1, n) + z;
                        int r = queryright(st, en, 1, 1, n) - z;
                        cout << 4*(z - h[st]) + 2*(r - l) + (z - h[en]) << '\n';
                } else {
                        int z = querymax(en, st, 1, 1, n);
                        int l = queryleft(en, st, 1, 1, n) + z;
                        int r = queryright(en, st, 1, 1, n) - z;
                        cout << 4*(z - h[st]) + 2*(r - l) + (z - h[en]) << '\n';
                }       
        }
        return 0;
}