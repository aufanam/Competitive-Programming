#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long a, b, c;
        cin >> a >> b >> c;
        long long mx = max({a, b, c});
        long long ans = 0;
        if (a != mx) ans += (mx - (a + 1));
        if (b != mx) ans += (mx - (b + 1));
        if (c != mx) ans += (mx - (c + 1));
        cout << ans << '\n';
        return 0;
}