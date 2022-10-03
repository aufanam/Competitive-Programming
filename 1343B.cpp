#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, total;

    cin >> t;

    while (t--)
    {
        cin >> n;
        total = 0;
        if (n % 4 == 2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i+=2)
            {       
                total += i;
                cout << i << ' ';
            }
            for (int i = 1; i <= n-2; i+=2)
            {
                total -= i;
                cout << i << ' ';
            }
            cout << total << '\n';
        }
    }
    // code
    return 0;
}