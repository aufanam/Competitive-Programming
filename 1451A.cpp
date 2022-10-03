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
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2) cout << "1\n";
        else if (n == 1) cout << "0\n";
        else if (n == 3 || n%2 == 0) cout << "2\n";
        else cout << "3\n";
    }
    // code
    return 0;
}