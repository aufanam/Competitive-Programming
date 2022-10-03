#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, r;
    cin >> t;

    while (t--)
    {
        cin >> n;
        r = n%7;
        if (r > n%10)
        {
            cout << n-r+7 << '\n';
        }
        else
        {
            cout << n-r << '\n';
        }
    }
    // code
    return 0;
}