#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, m;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << '\n';
        }
        else if (n == 2)
        {
            cout << m << '\n';
        }
        else
        {
            cout << 2*m << '\n';
        }
    }
    // code
    return 0;
}