#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        if (n > 2) cout << "NO\n";
        else if (n == 2 && s[0] == s[1]) cout << "NO\n";
        else cout << "YES\n";
    }
    // code
    return 0;
}