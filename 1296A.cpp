#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a;
    bool e, o;

    cin >> t;

    while (t--)
    {
        cin >> n;
        e = o = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a%2)
            {
                o = true;
            }
            else
            {
                e = true;
            }
        }
        if (!o || !(e || n%2))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    // code
    return 0;
}