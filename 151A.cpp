#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, k, l, c, d, p, nl, np, garam, limes, minuman;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    garam = p / np;
    limes = c * d;
    minuman = k * l / nl;

    cout << min(min(garam, limes), minuman)/n << '\n';
    // code
    return 0;
}