#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    double t, n, x;

    cin >> t;

    while (t--)
    {
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << ceil((n - 2) / x) + 1 << '\n';
        }
    }
    // code
    return 0;
}