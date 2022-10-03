#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, total = 0;
    string a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a[0] == 'T')
        {
            total += 4;
        }
        else if (a[0] == 'C')
        {
            total += 6;
        }
        else if (a[0] == 'O')
        {
            total += 8;
        }
        else if (a[0] == 'D')
        {
            total += 12;
        }
        else if (a[0] == 'I')
        {
            total += 20;
        }
    }

    cout << total << '\n';
    // code

    return 0;
}