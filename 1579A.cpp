#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t;
    string s;

    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s.length() == 2 * count(s.begin(), s.end(), 'B'))
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