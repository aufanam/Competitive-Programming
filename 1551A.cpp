#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n % 3 == 1)
        {
            cout << n/3 + 1 << ' ' << n/3 << '\n';
        }
        else if (n % 3 == 2)
        {
            cout << n/3 << ' ' << n/3 + 1 << '\n';
        }
        else
        {
            cout << n/3 << ' ' << n/3 << '\n';
        }
    }
    // code
    return 0;
}