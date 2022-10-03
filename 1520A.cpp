#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n;
    string b;
    cin >> t;

    while (t--)
    {
        set<char> d;
        cin >> n >> b;
        for (int i = 0; i < n; i++)
        {
            d.insert(b[i]);
        }
        auto bi = unique(b.begin(), b.end());
        if (string(b.begin(), bi).length() == d.size())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    // code
    return 0;
}