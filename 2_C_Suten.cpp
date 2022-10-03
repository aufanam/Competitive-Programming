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
        string subsoal;
        cin >> subsoal;
        int n;
        cin >> n;
        vector<vector<int>> v(n+5, vector<int>(n+5, -1)); // 0 -> kalah, 1 -> seri, 2 -> menang
        for (int i = 0; i < (n*(n-1))/2; i++) {
                int a, b;
                cin >> a >> b;
                if (v[a][b] == 1) {
                        cout << "SERI" << endl;
                } else if (v[a][b] == 2) {
                        cout << a << " MENANG" << endl;
                } else if (v[a][b] == 0) {
                        cout << b << " MENANG" << endl;
                } else {
                        cout << "PASS" << endl;
                        string ss;
                        cin >> ss;
                        if (ss == "SERI") {
                                v[a][b] = 1;
                                v[b][a] = 1;
                        } else {
                                string bb;
                                cin >> bb;
                                int z = stoi(ss);
                                if (z == a) {
                                        v[a][b] = 2;
                                        v[b][a] = 0;
                                } else {
                                        v[a][b] = 0;
                                        v[b][a] = 2;
                                }
                        }
                        for (int j = 1; j <= n; j++) {
                                for (int k = 1; k <= n; k++) {
                                        for (int l = 1; l <= n; l++) {
                                                if (j == k || k == l || l == j) continue;
                                                if (v[j][k] == 2 && v[k][l] == 2) {
                                                        v[j][l] = 0;
                                                        v[l][j] = 2;
                                                }
                                                if (v[j][k] == 2 && v[k][l] == 1) {
                                                        v[j][l] = 2;
                                                        v[l][j] = 0;
                                                }
                                                if (v[j][k] == 2 && v[k][l] == 0) {
                                                        v[j][l] = 1;
                                                        v[l][j] = 1;
                                                }
                                                if (v[j][k] == 1 && v[k][l] == 2) {
                                                        v[j][l] = 2;
                                                        v[l][j] = 0;
                                                }
                                                if (v[j][k] == 1 && v[k][l] == 1) {
                                                        v[j][l] = 1;
                                                        v[l][j] = 1;
                                                }
                                                if (v[j][k] == 1 && v[k][l] == 0) {
                                                        v[j][l] = 0;
                                                        v[l][j] = 2;
                                                }
                                                if (v[j][k] == 0 && v[k][l] == 2)  {
                                                        v[j][l] = 1;
                                                        v[l][j] = 1;
                                                }
                                                if (v[j][k] == 0 && v[k][l] == 1) {
                                                        v[j][l] = 0;
                                                        v[l][j] = 2;
                                                }
                                                if (v[j][k] == 0 && v[k][l] == 0) {
                                                        v[j][l] = 2;
                                                        v[l][j] = 0;
                                                }
                                        }
                                }
                        }
                }
        }
        return 0;
}