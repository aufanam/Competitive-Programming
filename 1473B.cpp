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
    int q, a, b;
    string s, t, sAwal, tAwal;
    cin >> q;
    while (q--)
    {
        cin >> s >> t;
        sAwal = s;
        tAwal = t;
        a = lcm(s.length(), t.length())/s.length();
        b = lcm(s.length(), t.length())/t.length();
        for (int i = 1; i < a; i++)
        {
            s += sAwal;
        }
        for (int i = 1; i < b; i++)
        {
            t += tAwal;
        }
        if (s == t) cout << s << '\n';
        else cout << "-1\n";
    }
    // code
    return 0;
}