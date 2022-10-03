#include <bits/stdc++.h>
#define ll long long
using namespace std;
int bruh(string s, char c)
{
    for (int i = 0; i < s.length(); i+=2)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, nice;
    string s;
    char c;

    cin >> t;

    while (t--)
    {
        nice = 0;
        cin >> s >> c;
        nice = bruh(s, c);
        if (nice)
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