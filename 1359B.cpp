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
    ll t, n, m, x, y, k, total1, total2;
    char c;
    cin >> t;
    while (t--)
    {
        total1 = 0;
        total2 = 0;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; i++)
        {
            k = 0;
            for (int i = 0; i < m; i++)
            {
                cin >> c;
                if (c == '.')
                {
                    k++;
                    total1++;
                }
                else k = 0;
                if (k == 2)
                {
                    total1 -= 2;
                    total2++;
                    k = 0;
                }
            }
        }
        if (2*x < y) cout << x*(total1 + 2*total2) << '\n';
        else cout << x*total1 + y*total2 << '\n';
    }
    // code
    return 0;
}