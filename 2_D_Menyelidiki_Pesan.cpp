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
        string a, b, d;
        cin >> a >> b >> d;
        string c(n, '?');
        vector<char> v(26, '0');
        vector<char> z(26, '0');
        for (int i = 0; i < n; i++) {
                if (v[a[i] - 'A'] == '0' && z[b[i] - 'A'] == '0') {
                        v[a[i] - 'A'] = b[i];
                        z[b[i] - 'A'] = a[i];
                } else if (v[a[i] - 'A'] == '0' && z[b[i] - 'A'] != a[i]) {
                        cout << "Pak Dengklek bingung\n";
                        return 0;
                } else if (v[a[i] - 'A'] != b[i] && z[b[i] - 'A'] == '0') {
                        cout << "Pak Dengklek bingung\n";
                        return 0;
                }
        }
        for (int i = 0; i < n; i++) {
                if (z[d[i] - 'A'] != '0') {
                        c[i] = z[d[i] - 'A'];
                }
        }
        cout << c << '\n';
        return 0;
}