#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (2*max({a,b,c}) == a+b+c)
        {
            cout << "YES\n";
        }
        else if (a == b)
        {
            if (c % 2)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else if (a == c)
        {
            if (b % 2)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else if (c == b)
        {
            if (a % 2)
                cout << "NO\n";
            else
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