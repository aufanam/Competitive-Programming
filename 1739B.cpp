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
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> d(n);
                for (auto &x : d) cin >> x;
                vector<int> a(n);
                a[0] = d[0];
                for (int i = 1; i < n; i++) {
                        if (d[i] == 0) {
                                a[i] = a[i-1];
                        } else {
                                if (a[i-1] - d[i] >= 0) {
                                        cout << "-1\n";
                                        goto Next;
                                } else {
                                        a[i] = a[i-1] + d[i];
                                }
                        }
                }
                for (auto x : a) {
                        cout << x << " ";
                }
                cout << '\n';
                Next:;
        }
        return 0;
}