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
        vector<vector<int>> ans(7, vector<int>(7, 0));
        vector<bool> vis(30, false);
        string subsoal;
        cin >> subsoal;
        int n;
        cin >> n;
        ans[5][5] = 1;
        vis[1] = true;
        int cnt = 0;
        int cur = 1;
        vector<vector<int>> col(7);
        vector<vector<int>> row(7);
        col[5].push_back(1);
        row[5].push_back(1);
        int pc = 5;
        int pr = 5;
        while (true) {
                cout << "ATAS" << endl;
                int ret;
                cin >> ret;
                if (ret == 1) break;
                ans[--pc][5] = ret;
                vis[ret] = true;
                col[5].push_back(ret);
        }
        while (true) {
                cout << "KIRI" << endl;
                int ret;
                cin >> ret;
                if (ret == 1) break;
                ans[5][--pr] = ret;
                vis[ret] = true;
                row[5].push_back(ret);
        }
        for (int i = 4; i >= pc; i--) {
                
        }
        return 0;
}