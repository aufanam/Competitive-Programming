#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, len;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> s;
        len = s.length();
        if (len % 2)
        {
            cout << "NO\n";
        }
        else if (equal(s.begin(), s.begin() + len / 2, s.begin() + len / 2))
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