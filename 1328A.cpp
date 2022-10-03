#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, a, b;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b)
        {
            cout << b - (a % b) << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
    // code

    return 0;
}