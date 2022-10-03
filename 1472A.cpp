#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, w, h, n;

    cin >> t;

    while (t--)
    {
        int b, total = 0;
        cin >> w >> h >> n;
        b = w*h;
        while (b % 2 == 0)
        {
            total++;
            b /= 2;
        }
        if (pow(2, total) >= n)
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