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
                vector<int> v(n);
                for (int i = 0; i < n; i++) {
                        cin >> v[i];
                }
                for (int i = 1; i < n; i++) {
                        if (v[i]%v[i-1] != 0) {
                                cout << "NO\n";
                                goto Next;
                        } else {
                                v[i] = v[i-1];
                        }
                }
                cout << "YES\n";
                Next:;
        }
        return 0;
}