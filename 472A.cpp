#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n;

    cin >> n;

    if (n % 2 == 0)
    {
        cout << 4 << ' ' << n - 4 << '\n';
    }
    else 
    {
        cout << 9 << ' ' << n - 9 << '\n';
    }
    // code
    return 0;
}