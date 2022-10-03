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
    int t, n;
    string s;
    bool bull;
    cin >> t;
    while (t--)
    {
        bull = 0;
        cin >> n >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                if (!bull)
                {
                    cout << i + 1 << ' ' << i + 2 << '\n';
                    bull = true;
                }
            }
        }
        if (!bull) cout << "-1 -1\n";
    }
    // code
    return 0;
}