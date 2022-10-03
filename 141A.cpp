#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string a, b, c;

    cin >> a >> b >> c;

    string ab = a + b;

    if (ab.length() != c.length())
    {
        cout << "NO\n";
    }
    else
    {
        unordered_map<char, int> uab, uc;
        
        for (int i = 0; i < ab.length(); i++)
        {
            uab[ab[i]]++;
        }
        for (int i = 0; i < c.length(); i++)
        {
            uc[c[i]]++;
        }
        if (uab == uc)
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