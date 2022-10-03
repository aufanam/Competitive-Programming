#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, x, y, n, nAwal = 0;

    cin >> t;

    while (t--)
    {
        cin >> x >> y >> n;
        nAwal = n;
        n /= x;
        n *= x;

        if (n + y > nAwal)
        {
            cout << n - x + y << '\n';
        }
        else
        {
            cout << n + y << '\n';
        }
    }
    // code
    return 0;
}