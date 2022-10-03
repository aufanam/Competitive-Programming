#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int n, m;
int arr[105];
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                cin >> n >> m;
                int mn = 111111111111;
                int cnt2 = 0;
                for (int i = 1; i <= m; i++) {
                        cin >> arr[i];
                        mn = min(mn, arr[i]);
                        if (arr[i] == 2) {
                                cnt2++;
                        }
                }
                if (mn >= 2) {
                        cout << "NO\n";
                        cout << n - 1 << '\n';
                        for (int i = 1; i < n; i++) {
                                cout << 0 << ' ' << i << '\n';
                        }
                } else {
                        set<int> buset;
                        for (int kk = 0; kk <= n; kk++) {
                                buset.clear();
                                buset.insert(kk);
                                for (int i = 1; i <= m; i++) {
                                        for (auto it = buset.begin(); it != buset.end(); it++) {
                                                int zx = *it + arr[i];
                                                int fd = *it - arr[i];
                                                if (0 <= zx && zx <= n) {
                                                        buset.insert(zx);
                                                }
                                                if (0 <= fd && fd <= n) {
                                                        buset.insert(fd);
                                                }
                                        }
                                }
                                vector<bool> valid(n+5, false);
                                for (auto z : buset) {
                                        valid[abs(z)] = true;
                                }
                                /*
                                x x x x x x
                                */
                                for (int i = 0; i <= n; i++) {
                                        if (!valid[i]) {
                                                goto Nxt;
                                        }
                                }
                                cout << "SI\n";
                                goto Next;
                                Nxt:;
                        }
                }
                Next:;
        }  
        return 0;   
}  