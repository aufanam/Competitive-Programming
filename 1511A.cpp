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
    int t, n, r, total;
    cin >> t;
    while (t--)
    {
        total = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> r;
            if (r == 1 || r == 3)
            {
                total++;
            }
        }
        cout << total << '\n';
    }
    // code
    return 0;
}