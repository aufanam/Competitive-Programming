#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, a, total = 0, bocah = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 0)
        {
            total += a;
        }
        else if (a < 0 && total == 0)
        {
            bocah++;
        }
        else
        {
            total--;
        }
    }

    cout << bocah << '\n';
    // code
    return 0;
}