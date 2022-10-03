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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
                cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
                cin >> b[i];
        }
        sort(all(a));
        sort(all(b));
        vector<pair<int, int>> zz(n);
        for (int i = 0; i < n; i++) {
                cin >> zz[i].fi >> zz[i].se;
        }
        vector<bool> needa(111111, false);
        vector<bool> needb(111111, false);
        for (int i = 0; i < n; i++) {
                needa[a[i]] = true;
        }
        for (int i = 0; i < n; i++) {
                needb[b[i]] = true;
        }
        vector<bool> donea(111111, false);
        vector<bool> doneb(111111, false);
        for (int i = 0; i < n; i++) {
                if (needa[zz[i].fi] && needb[zz[i].se] && !donea[zz[i].fi] && !doneb[zz[i].se]) {
                        donea[zz[i].fi] = true;
                        doneb[zz[i].se] = true;
                } else {
                        swap(zz[i].fi, zz[i].se);
                        if (needa[zz[i].fi] && needb[zz[i].se] && !donea[zz[i].fi] && !doneb[zz[i].se]) {
                                donea[zz[i].fi] = true;
                                doneb[zz[i].se] = true;
                        }
                }
        }
        for (int i = 0; i < n; i++) {
                if (!donea[a[i]] || !doneb[b[i]]) {
                        cout << "NO\n";
                        return 0;
                }
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
                cout << zz[i].fi << ' ' << zz[i].se << '\n';
        }
        return 0;
}