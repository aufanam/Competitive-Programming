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

    cout << (1-2*(n%2)) * (n+1)/2 << '\n';
    // code

    return 0;
}