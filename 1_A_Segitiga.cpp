#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
using namespace std;
const int INF = 1e9;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string s;
        getline(cin, s);
        /*
        6
        4 3
        2 1 5
        */
        int n;
        cin >> n;
        if (n == 1) {
                int x;
                cin >> x;
                cout << x << '\n';
                return 0;
        }
        vector<int> v;
        for (int i = 0; i < (n*(n+1))/2; i++) {
                int x;
                cin >> x;
                v.push_back(x);
        }
        sort(all(v));
        int mn = INF;
        int idx;
        for (int i = 1; i < (n*(n+1))/2 - 1; i++) {
                if (v[i+1] - v[i] <= mn) {
                        idx = i;
                        mn = v[i+1] - v[i];
                }
        }
        vector<int> zz;
        for (int i = 1; i < (n*(n+1))/2; i++) {
                if (i == idx || i == idx + 1) continue;
                zz.push_back(v[i]);
        }
        vector<vector<int>> ans(n+5);
        ans[1].push_back(v[0]);
        ans[2].push_back(v[idx + 1]);
        ans[2].push_back(v[idx]);
        int p = 0;
        for (int i = n; i >= 3; i--) {
                ans[i].push_back(zz[p+1]);
                ans[i].push_back(zz[p]);
                p += 2;
        }
        for (int i = 3; i <= n; i++) {
                ans[i].push_back(zz[p++]);
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                        cout << ans[i][j-1] << ' ';
                }
                cout << '\n';
        }
        return 0;
}