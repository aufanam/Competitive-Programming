#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, total;

    cin >> t;

    while (t--)
    {
        total = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            total += a;
        }
        if (total < n)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << total - n << '\n';
        }
    }
    // code
    return 0;
}