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
    ll t, a, b, k, pos;
    cin >> t;
    while (t--)
    {
        pos = 0;
        cin >> a >> b >> k;
        if (k%2)
        {
            cout << a*(k/2+1) - b*(k/2) << '\n';
        }
        else
        {
            cout << (a-b)*(k/2) << '\n';
        }
    }
    // code
    return 0;
}