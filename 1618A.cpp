#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, a, b, c, d;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> d >> d >> d >> d >> c;
        cout << a << ' ' << b << ' ' << c - (a+b) << '\n';
    }
    // code
    return 0;
}