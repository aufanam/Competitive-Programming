#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, a;

    cin >> t;

    while (t--)
    {
        ll berat = 0, nice = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            berat += a;
            if (a == 1)
            {
                nice++;
            }
        }
        if (berat % 2 == 0 && nice > 0)
        {
            cout << "YES\n";
        }
        else if (berat % 2 == 0 && n % 2 == 0)
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