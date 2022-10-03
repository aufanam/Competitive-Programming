#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, a, b;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % 10 == b % 10)
        {
            cout << abs(a - b) / 10 << '\n';
        }
        else
        {
            cout << abs(a - b) / 10 + 1 << '\n';
        }
    }
    // code
    return 0;
}