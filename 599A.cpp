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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c)
    {
        cout << 2 * (a + b) << '\n';
    }
    else if (b > a + c)
    {
        cout << 2 * (a + c) << '\n';
    }
    else if (a > b + c)
    {
        cout << 2 * (b + c) << '\n';
    }
    else
        cout << a + b + c << '\n';

    // code
    return 0;
}