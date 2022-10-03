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
    int n, arr[100], min, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = abs(arr[0] - arr[n-1]);
    a = 1;
    b = n;
    for (int i = 0; i < n-1; i++)
    {
        if (abs(arr[i] - arr[i+1]) < min)
        {
            min = abs(arr[i] - arr[i+1]);
            a = i+1;
            b = i+2;
        }
    }
    cout << a << ' ' << b << '\n';
    // code
    return 0;
}