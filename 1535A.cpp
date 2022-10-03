#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, a, b, c, d;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (max(a,b) > min(c,d) && max(c,d) > min(a,b))
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