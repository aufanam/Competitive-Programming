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
    int t, n, m, r, c;
    char wb;
    bool black, rc, pas;
    cin >> t;
    while (t--)
    {
        black = rc = pas = 0;
        cin >> n >> m >> r >> c;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> wb;
                if (wb == 'B')
                    black = true;
                if ((i == r || j == c) && wb == 'B')
                    rc = true;
                if (i == r && j == c && wb == 'B')
                    pas = true;
            }
        }
        if (pas) cout << "0\n";
        else if (rc) cout << "1\n";
        else if (black) cout << "2\n";
        else cout << "-1\n";
    }
    // code
    return 0;
}