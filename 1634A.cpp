#include <bits/stdc++.h>
#define ll long long
using namespace std;
string balik(string s)
{
    reverse(s.begin(), s.end());
    return s;
}
int digitsum(int a)
{
    int b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    return b;
}
int factorial(int a)
{
    ll b = 1;
    while (a > 0)
    {
        b *= a;
        a--;
    }
    return b;
}
int ceildiv(int a, int b)
{
    int q;
    q = a / b + (a % b != 0);
    return q;
}
char letter(int n)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    return alphabet[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, k;
    string s;
    bool bull, cool;
    cin >> t;
    while (t--)
    {
        bull = cool = false;
        cin >> n >> k >> s;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
                bull = true;
        }
        if (s != balik(s))
            cool = true;
        if (!bull || !cool) cout << 1 << '\n';
        else
        {
            if (k == 0) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
    }
    // code
    return 0;
}