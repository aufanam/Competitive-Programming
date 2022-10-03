#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(int a)
{
    int b, c = 16, d;
    for (int j = 0; j < 15; j++)
    {
        a *= pow(2, j);
    for (int i = 0; i < 15; i++)
    {
        d = a + i;
        while (d > 32768) d -= 32768;
        b = 0;
        while (d%2 == 0 && d > 0)
        {
            b++;
            d /= 2;
        }
        if (c > min(15, i+15-b+j)) c = min(15, i+15-b+j);
    }
        a /= pow(2, j);
    }
    return c;
}
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
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0) cout << 0 << '\n';
        else cout << solve(a) << ' ';
    }
    cout << '\n';
    // code
    return 0;
}