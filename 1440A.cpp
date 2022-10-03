#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll difdigit(ll a)
{
    ll b = floor(log10(a)+1);
    int arr[10];
    memset(arr, 0, sizeof(arr));
    while (a > 0)
    {
        arr[a % 10]++;
        a /= 10;
    }
    if (count(arr, arr+10, 1) == b) return 1;
    return 0;
}
ll modnonol(ll a, ll b)
{
    if (a%b) return a%b;
    else return b;
}
string balik(string s)
{
    reverse(s.begin(), s.end());
    return s;
}
ll digitsum(ll a)
{
    ll b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    return b;
}
ll factorial(ll a)
{
    ll b = 1;
    while (a > 0)
    {
        b *= a;
        a--;
    }
    return b;
}
ll ceildiv(ll a, ll b)
{
    ll q;
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
    ll t, n, a, b, h, satu, nol;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b >> h >> s;
        nol = count(s.begin(), s.end(), '0');
        satu = n - nol;
        if (a == b) cout << a*n << '\n';
        else if (a > b)
        {
            if (a >= b + h) cout << nol*h + n*b << '\n';
            else cout << nol*a + satu*b << '\n';
        }
        else
        {
            if (b >= a + h) cout << satu*h + n*a << '\n';
            else cout << nol*a + satu*b << '\n';
        }
    }
    // code
    return 0;
}