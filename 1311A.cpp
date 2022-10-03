#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, a, b;

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        if (a > b)
        {
            if ((a-b)%2)
            {
                cout << "2\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else if (a < b)
        {
            if ((b-a)%2)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
        else
        {
            cout << "0\n";
        }
    }
    // code
    return 0;
}