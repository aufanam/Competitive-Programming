#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, l, r;

    cin >> t;

    while (t--)
    {
        cin >> l >> r;

        if (2*l > r)
        {
            cout << "-1 -1\n";
        }
        else
        {
            cout << l << ' ' << 2*l << '\n';
        }
    }
    // code
    return 0;
}