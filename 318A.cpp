#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, k;
    cin >> n >> k;

    if (k <= (n+1)/2)
    {
        cout << 2*k-1 << '\n';
    }
    else
    {
        cout << (k-(n+1)/2)*2 << '\n';
    }
    // code
    return 0;
}