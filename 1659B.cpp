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
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    return alphabet[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, k, arr[200000], kAwal;
    string s;
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        cin >> n >> k >> s;
        kAwal = k;
        if (k%2)
        {
            for (int i = 0; i < n; i++)
            {
                if (k > 0)
                {
                    if (s[i] == '1') arr[i] = 1, k--;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (k > 0)
                {
                    if (s[i] == '0') arr[i] = 1, k--;   
                }
            }
        }
        arr[n-1] += k;
        for (int i = 0; i < n; i++)
        {
            if (kAwal%2)
            {
                if (arr[i]%2 == 0)
                {
                    if (s[i] == '1') s[i] = '0';
                    else s[i] = '1';
                }
            }
            else
            {
                if (arr[i]%2)
                {
                    if (s[i] == '1') s[i] = '0';
                    else s[i] = '1';
                }
            }
        }
        cout << s << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    // code
    return 0;
}