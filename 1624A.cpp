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
        cin >> n;
        int minA, maxA;
        cin >> a;
        minA = maxA = a;
        for (int i = 1; i < n; i++)
        {
            cin >> a;
            if (a >= maxA)
            {
                maxA = a;
            }
            if (a <= minA)
            {
                minA = a;
            }
        }
        cout << maxA - minA << '\n';
    }
    // code
    return 0;
}