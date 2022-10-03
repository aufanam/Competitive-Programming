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
    ll t, k, a, b, bruh, nah;
    cin >> t;
    while (t--)
    {
        cin >> k;
        bruh = pow(ceil(sqrt(k)), 2);
        nah = sqrt(bruh);
        if (bruh - k < nah - 1) cout << nah << ' ' << bruh - k + 1 << '\n';
        else cout << 2*nah - bruh + k - 1 << ' ' << nah << '\n';
    

    }
    // code
    return 0;
}