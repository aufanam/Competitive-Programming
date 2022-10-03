#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            s = "";
            for (int j = 0; j < i; j++) s += "()";
            for (int j = 0; j < n - i; j++) s += "(";
            for (int j = 0; j < n - i; j++) s += ")"; 
            cout << s << '\n';
        }
    }
    // code
    return 0;
}