#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, m, x, a, b, bruh;

    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x;
        a = (x + n - 1) / n;
        b = x - (a - 1) * n;
        bruh = b * m + a - m;
        cout << bruh << '\n';
    }
    // code
    return 0;
}