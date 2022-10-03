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
        freopen("pertahanan_6.in", "r", stdin);
        freopen("aufanmantap.txt", "w", stdout);
        int n, m, k;
        cin >> n >> m >> k;
        int ganjil = 0;
        int genap = 0;
        for (int i = 0; i < k; i++) {
                int x;
                cin >> x;
                if (x%2) ganjil += x;
                else genap += x;
        }
        cout << ganjil << ' ' << genap << '\n';
        return 0;
}