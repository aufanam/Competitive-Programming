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
                int mxodd = 0;
                int mnodd = 11111111111;
                int mxeven = 0;
                int mneven = 11111111111;
                set<int> buset;
                int sumodd = 0;
                int sumeven = 0;
                for (int i = 0; i < n; i++) {
                        int x, y;
                        cin >> x >> y;
                        buset.insert(x);
                        if (y%2) {
                                sumodd += y;
                                mxodd = max(mxodd, y);
                                mnodd = min(mnodd, y);
                        } else {
                                sumeven += y;
                                mxeven = max(mxeven, y);
                                mneven = min(mneven, y);
                        }
                }
                if (buset.size() != 1) {
                        cout << "NO\n";
                        continue;
                }
                //asd asda s
                bool okodd = true;
                bool okeven = true;
                if (mxodd == 0) okodd = false;
                if (mxeven == 0) okeven = false;
                if (((mxodd + mnodd)*((mxodd - mnodd)/2 + 1))/2 != sumodd) okodd = false;
                if (((mxeven + mneven)*((mxeven - mneven)/2 + 1))/2 != sumeven) okeven = false;
                if (okodd && okeven) {
                        if (mnodd == 1 && mneven == 2) {
                                cout << "SI\n";
                        } else {
                                cout << "NO\n";
                        }
                } else if (okodd) {
                        if (mxeven == 0) {
                                cout << "SI\n";
                        } else {
                                cout << "NO\n";
                        }
                } else if (okeven) {
                        if (mxodd == 0) {
                                cout << "SI\n";
                        } else {
                                cout << "NO\n";
                        }
                } else {
                        cout << "NO\n";
                }
        }
        return 0;
}