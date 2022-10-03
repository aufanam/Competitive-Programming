#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    double t, r, b, d;
    cin >> t;
    while (t--)
    {
        cin >> r >> b >> d;
        if (max(r,b)/min(r,b) <= d + 1)
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