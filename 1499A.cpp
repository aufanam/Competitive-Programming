#include <bits/stdc++.h>
#define ll long long
using namespace std;
int modnonol(int a, int b)
{
    if (a%b) return a%b;
    else return b;
}
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
    int t, n, p, q, w, b, maxWhite, maxBlack;
    cin >> t;
    while (t--)
    {
        cin >> n >> p >> q >> w >> b;
        maxWhite = min(p, q) + abs(p-q)/2;
        maxBlack = n - maxWhite - (abs(p-q) % 2);
        if (w <= maxWhite && b <= maxBlack) cout << "YES\n";
        else cout << "NO\n";
    }
    // code
    return 0;
}