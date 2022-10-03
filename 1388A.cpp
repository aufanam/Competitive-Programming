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
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n < 31) cout << "NO\n";
        else if (n == 36 || n == 40 || n == 44) cout << "YES\n" << "6 10 15 " << n - 31 << '\n';
        else cout << "YES\n" << "6 10 14 " << n - 30 << '\n';
    }
    // code
    return 0;
}