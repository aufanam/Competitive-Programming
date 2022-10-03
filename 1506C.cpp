#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
    int t, n, m, ans;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        n = a.size();
        m = b.size();
        ans = 0;
        for (int i = 1; i <= min(n, m); i++)
        {
            for (int j = 0; j + i <= n; j++)
            {
                for (int k = 0; k + i <= m; k++)
                {
                    if (a.substr(j, i) == b.substr(k, i))
                    {
                        ans = max(ans, i);
                    }
                }
            }
        }
        cout << n + m - 2*ans << '\n';
    }
    // code
    return 0;
}