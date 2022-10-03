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
        int k = 20;
        int cnt = 0;
        for (int a = 1; a <= k; a++) {
                for (int b = a + 1; b <= k; b++) {
                        for (int c = b + 1; c <= k; c++) {
                                for (int d = c + 1; d <= k; d++) {
                                        cnt++;
                                }
                        }
                }
        }
        cout << cnt << '\n';
        return 0;
}