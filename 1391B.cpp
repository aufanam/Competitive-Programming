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
    int t, n, m, total;
    string s;
    cin >> t;
    while (t--)
    {
        total = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (i < n - 1 && s[m-1] == 'R') total++;
            else if (i == n - 1)
            {
                for (int j = 0; j < m; j++)
                {
                    if (s[j] == 'D') total++;
                }
            }
        }
        cout << total << '\n';
    }
    // code
    return 0;
}