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
    int a, b, c, d, e, f, n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    if (ceildiv((a+b+c), 5) + ceildiv((d+e+f), 10) <= n) cout << "YES\n";
    else cout << "NO\n";
    // code
    return 0;
}