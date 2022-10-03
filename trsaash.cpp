vector<int> zx(5*N);
vector<int> tree(5*N);
void build(int idx, int st, int en) {
        if (st == en) {
                tree[idx] = zx[st];
                return;
        }
        int l = 2*idx + 1;
        int r = l + 1;
        int m = st + (en - st)/2;
        build(l, st, m);
        build(r, m + 1, en);
        tree[idx] = gcd(tree[l], tree[r]);
        return;
}
int qg(int l, int r, int idx, int st, int en) {
        if (st > r || en < l) return 0;
        if (st >= l && en <= r) {
                return tree[idx];
        }
        int lf = 2*idx + 1;
        int rg = lf + 1;
        int m = st + (en - st)/2;
        return gcd(qg(l, r, lf, st, m), qg(l, r, rg, m + 1, en));
}