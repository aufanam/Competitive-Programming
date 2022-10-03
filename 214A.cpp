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
    int m, n, total, nAkhir;
    cin >> n >> m;
    for (int i = 0; i <= sqrt(n); i++)
    {
        nAkhir = n - pow(i, 2);
        if (pow(nAkhir, 2) + i == m) total++;
    }
    cout << total << '\n';
    // code
    return 0;
}