#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, a, b, c, d;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
        d = abs(a-b);

        if (d < min(a,b) || c > d*2)
        {
            cout << "-1\n";
        }
        else
        {
            cout << (c+d-1) % (d*2) + 1 << '\n';
        }
    }
    // code
    return 0;
}