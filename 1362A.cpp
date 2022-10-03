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
    ll t, a, b, maks, meen, c;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> a >> b;
        maks = max(a, b);
        meen = min(a, b);
        while ((maks > meen) && maks % 2 == 0)
        {
            maks /= 2;
            c++;
        }
        if (maks == meen) cout << ceildiv(c, 3) << '\n';
        else cout << "-1\n";
    }
    // code
    return 0;
}