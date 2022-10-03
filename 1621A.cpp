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
    int t, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k > (n+1)/2) cout << "-1\n";
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i%2)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (j == i && k > 0) cout << 'R';
                        else cout << '.';
                    }
                    cout << '\n';
                    k--;
                }
                else
                {
                    for (int j = 0; j < n; j++)
                    {
                        cout << '.';
                    }
                    cout << '\n';
                }
            }
        }
    }
    // code
    return 0;
}