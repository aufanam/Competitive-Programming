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
    int t, x, y;
    string s;
    bool bullX, bullY;
    cin >> t;
    while (t--)
    {
        bullX = bullY = 0;
        cin >> x >> y >> s;
        if (x >= 0)
        {
            if (count(s.begin(), s.end(), 'R') >= x)
                bullX = true;
        }
        else if (count(s.begin(), s.end(), 'L') >= abs(x))
            bullX = true;
        if (y >= 0)
        {
            if (count(s.begin(), s.end(), 'U') >= y)
                bullY = true;
        }
        else if (count(s.begin(), s.end(), 'D') >= abs(y))
            bullY = true;
        if (bullX && bullY) cout << "YES\n";
        else cout << "NO\n";
    }
    // code
    return 0;
}