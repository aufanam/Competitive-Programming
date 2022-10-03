#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPrime(ll n)
{
    if (n <= 1) return false;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0) return false;
    }
    return true;
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
    int a, n, t[101], arr[101], ans, c;
    memset(arr, 0, sizeof(arr));
    cin >> n >> a;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i < a; i++)
    {
        if (t[i] > 0) arr[a - i]++;
    }
    for (int i = a; i <= n; i++)
    {
        if (t[i] > 0) arr[i - a]++;
    }
    ans = accumulate(arr, arr + n + 1, 0);
    c = min(a - 1, n - a);
    for (int i = 1; i <= c; i++)
    {
        if ((arr[i] == 1)) ans--;
    }
    cout << ans << '\n';
    // code
    return 0;
}