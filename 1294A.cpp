#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, a, b, c, n;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> n;
        ll bruh = max({a, b, c});
        if (3*bruh - (a+b+c) <= n && (a+b+c+n) % 3 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    // code
    return 0;
}