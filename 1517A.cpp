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
    ll t, n, a, sum, r;
    cin >> t;
    while (t--)
    {
        sum = r = a = 0;
        cin >> n;
        if (n%2050) cout << "-1\n";
        else
        {
            a = n / 2050;
            while (a>0)
            {
                r = a % 10;
                a /= 10;
                sum += r;
            }
            cout << sum << '\n';
        }
    }
    // code
    return 0;
}