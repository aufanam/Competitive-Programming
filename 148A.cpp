#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int k,l,m,n,d;
    int total = 0;

    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++)
    {
        if (!(i % k && i % l && i % m && i % n))
        {
            total++;
        }
    }

    cout << total << '\n';

    // code

    return 0;
}