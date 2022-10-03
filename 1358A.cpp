#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, m;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        cout << (n*m+1)/2 << '\n';
    }
    // code
    return 0;
}