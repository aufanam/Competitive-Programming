#include <bits/stdc++.h>

using namespace std;

int main()
{
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++) {
                int n;
                cin >> n;
                int ans = 0;
                for (int j = 0; j < n; j++) {
                        int x;
                        cin >> x;
                        if (x < 60) ans++;
                }
                cout << "Case #" << i << ": " << ans << '\n';
        }
        return 0;
}