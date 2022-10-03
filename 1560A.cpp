#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, k;
    vector<int> m;
    cin >> t;
    for (int i = 1; i < 10000; i++)
    {
        if (!(i % 10 == 3 || i % 3 == 0))
        {
            m.push_back(i);
        }
    }
    while (t--)
    {
        cin >> k;
        cout << m[k-1] << '\n';
    }
    // code
    return 0;
}