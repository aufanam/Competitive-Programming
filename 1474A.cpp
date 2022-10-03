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
    string s, a;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        a = "";
        if (s[0] == '1')
            a += '2';
        else
            a += '1';
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == '2')
            {
                a += '1';
            }
            else if (a[i - 1] == '1')
            {
                if (s[i] == '0')
                    a += '0';
                else
                    a += '2';
            }
            else
            {
                if (s[i] == '0')
                    a += '1';
                else
                    a += '2';
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] - s[i];
        }
        cout << '\n';
    }
    // code
    return 0;
}