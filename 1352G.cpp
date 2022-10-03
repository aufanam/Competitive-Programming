#include <bits/stdc++.h>
#define ll long long
using namespace std;
int xorNih(int n)
{
    if (n%4 == 0) return n;
    if (n%4 == 1) return 1;
    if (n%4 == 2) return n + 1;
    return 0; 
}
int base2_10(int x)
{
    int output;
    for (int i = 0; x > 0; i++)
    {
        if (x%10 == 1) output += pow(2, i);
        x /= 10;
    }
    return output;
}
string base10_2(int x)
{
    string bruh = "";
    if (x == 0) return "0";
    while (x)
    {
        int nih = x % (-2);
        x /= -2;
        if (nih < 0) nih += 2, x++;
        bruh += to_string(nih);
    }
    reverse(bruh.begin(), bruh.end());
    return bruh;
}
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
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return alphabet[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    // code
    int t, n;
    cin >> t;
    int arr[4] = {2, 4, 1, 3};
    while (t--)
    {
        cin >> n;
        if (n <= 3) cout << "-1";
        else
        {
            for (int i = 0; i < 4*(n/4) - 4; i++)
            {
                cout << 4*(i/4) + arr[i%4] << ' ';
            }
            int d = 4*(n/4) - 4;
            if (n%4 == 1)
            {
                cout << d + 2 << ' ' << d + 4 << ' ' << d + 1 << ' ' << d + 3 << ' ' << d + 5;
            }
            else if (n%4 == 2)
            {
                cout << d + 2 << ' ' << d + 4 << ' ' << d + 1 << ' ' << d + 5 << ' ' << d + 3 << ' ' << d + 6;
            }
            else if (n%4 == 3)
            {
                cout << d + 2 << ' ' << d + 4 << ' ' << d + 6 << ' ' << d + 3 << ' ' << d + 1 << ' ' << d + 5 << ' ' << d + 7;
            }
            else cout << d + 2 << ' ' << d + 4 << ' ' << d + 1 << ' ' << d + 3;
        }
        cout << '\n';
    }
    // code
    return 0;
}