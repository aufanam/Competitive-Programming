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
    q = a/b + (a % b != 0);
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
    int t, n, m, a, total;
    cin >> t;
    while (t--)
    {
        total = 0;
        cin >> n >> m;
        while (n--)
        {
            cin >> a;
            total += a;
        }
        if (total == m) cout << "YES\n";
        else cout << "NO\n";
    }
    // code
    return 0;
}