#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, h, m;

    cin >> t;

    while (t--)
    {
        cin >> h >> m;
        cout << 60*(24-h) - m << '\n';
    }
    // code
    return 0;
}