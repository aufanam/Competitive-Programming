#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, a, b, c, m, x, y, z;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
        m = max({a, b, c});
        x = m - a + 1;
        y = m - b + 1;
        z = m - c + 1;
        if (a == m && max(b, c) != m)
        {
            x--;
        }
        if (b == m && max(a, c) != m)
        {
            y--;
        }
        if (c == m && max(b, a) != m)
        {
            z--;
        }

        cout << x << ' ' << y << ' ' << z << '\n';
    }
    // code
    return 0;
}