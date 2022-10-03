#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, a[50], b[50], minA, minB, c;
    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        minA = *min_element(a, a + n);
        minB = *min_element(b, b + n);

        c = 0;
        for (int i = 0; i < n; i++)
        {
            c += max(a[i] - minA, b[i] - minB);
        }
        cout << c << '\n';
    }

    // code
    return 0;
}