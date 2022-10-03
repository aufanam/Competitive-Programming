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
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (count(s.begin(), s.end(), 'a') == s.length()) cout << "NO\n";
        else if (s == balik(s)) cout << "YES\n" << 'a' << s << '\n';
        else
        {
            if ('a' + s != balik('a' + s)) cout << "YES\n" << 'a' << s << '\n';
            else if (s + 'a' != balik(s + 'a')) cout << "YES\n" << s << 'a' << '\n';
            else cout << "NO\n";
        }
    }
    // code
    return 0;
}