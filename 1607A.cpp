#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, arr[150], y;
    string s;
    char c;
    
    cin >> t;

    while (t--)
    {
        cin >> s;
        for (int i = 0; i < 26; i++)
        {
            arr[s[i]] = i;
        }
        cin >> s;
        c = s[0];
        y = 0;
        for (int i = 1; i < s.length(); i++)
        {
            y += abs(arr[s[i]] - arr[c]);
            c = s[i];
        }

        cout << y << '\n';
    }

    // code
    return 0;
}