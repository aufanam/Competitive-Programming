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

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            total++;
        }
    }
    cout << total << '\n';
        // code
        return 0;
}