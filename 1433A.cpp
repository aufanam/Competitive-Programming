#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, x, w, z;
    string y;

    cin >> t;

    while (t--)
    {
        cin >> x;
        w = (x % 10 - 1)*10;
        y = to_string(x);
        z = y.length();
        cout << (x % 10 - 1)*10 + (z*(z+1)/2) << '\n';
    }
    // code
    return 0;
}