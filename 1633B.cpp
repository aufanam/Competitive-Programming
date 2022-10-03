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
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "0")
            cout << 0 << '\n';
        else
        {
            if (count(s.begin(), s.end(), '1') > (double)s.length() / 2)
            {
                cout << count(s.begin(), s.end(), '0') << '\n';
            }
            else if (count(s.begin(), s.end(), '1') < (double)s.length() / 2)
            {
                cout << count(s.begin(), s.end(), '1') << '\n';
            }
            else
            {
                cout << s.length() / 2 - 1 << '\n';
            }
        }
    }
    // code
    return 0;
}