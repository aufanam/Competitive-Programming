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
    ll t, x, y, a, b;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b;
        if ((y-x) % (a+b)) cout << "-1\n";
        else cout << (y-x) / (a+b) << '\n';
    }
    // code
    return 0;
}