#include <bits/stdc++.h>
#define ll long long
using namespace std;
int modnonol(int a, int b)
{
    if (a%b) return a%b;
    else return b;
}
string balik(string s)
{
    reverse(s.begin(), s.end());
    return s;
}
int digitsum(int a)
{
    int b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    return b;
}
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
    ll t, n, c;
    string a, b;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0' && b[i] == '1')
            {
                a[i] == '2';
                c++;
            }
            else if (b[i] == '1' && a[i] == '1' && a[i-1] == '1')
            {
                a[i-1] = '0';
                c++;
            }
            else if (b[i] == '1' && a[i] == '1' && a[i+1] == '1')
            {
                a[i+1] = '0';
                c++;
            }
        }
        cout << c << '\n';
    }
    // code
    return 0;
}