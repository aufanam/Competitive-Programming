#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, total = 0;

    cin >> n;

    while (n/100 > 0)
    {
        total++;
        n -= 100;
    }
    while (n/20 > 0)
    {
        total++;
        n -= 20;
    }
    while (n/10 > 0)
    {
        total++;
        n -= 10;
    }
    while (n/5 > 0)
    {
        total++;
        n -= 5;
    }
    while (n/1 > 0)
    {
        total++;
        n -= 1;
    }

    cout << total << '\n';
    // code

    return 0;
}