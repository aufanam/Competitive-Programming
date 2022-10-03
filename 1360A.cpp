#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, a, b, kecil, besar;

    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << pow(2*a, 2) << '\n';
        }
        else
        {
            kecil = min(a, b);
            besar = max(a, b);

            if (2*kecil >= besar)
            {
                cout << pow(2*kecil, 2) << '\n';
            }
            else
            {
                cout << pow(besar, 2) << '\n';
            }
        }
    }
    // code
    return 0;
}