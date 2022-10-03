#include <bits/stdc++.h>
#define ll long long
using namespace std;
int bruh(int a, int b, int n)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i%2)
        {
            if (gcd(a, n) <= n) n -= gcd(a, n);
            else return 1;

        }
        else
        {
            if (gcd(b, n) <= n) n -= gcd(b, n);
            else return 0;
        }
    }
    return 1;
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
    int a, b, n;
    cin >> a >> b >> n;
    cout << bruh(a, b, n) << '\n';
    // code
    return 0;
}