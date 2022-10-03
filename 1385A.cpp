#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, x, y, z, a, b, c;

    cin >> t;

    while (t--)
    {
        int sama = 0, total = 0;
        cin >> x >> y >> z;
        if (x == y && y == z)
        {
            cout << "YES\n";
            cout << x << ' ' << y << ' ' << z << '\n';
        }
        else if (x == y)
        {
            if (x > z)
            {
                cout << "YES\n";
                cout << x << ' ' << z << ' ' << 1 << '\n';
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (y == z)
        {
            if (y > x)
            {
                cout << "YES\n";
                cout << y << ' ' << x << ' ' << 1 << '\n';
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (z == x)
        {
            if (z > y)
            {
                cout << "YES\n";
                cout << z << ' ' << y << ' ' << 1 << '\n';
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }

    // code
    return 0;
}