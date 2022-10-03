#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cout << s[n-1];
        }
        cout << '\n';
    }
    // code
    return 0;
}