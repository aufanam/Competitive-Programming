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
    ll t, k, arr[10];
    bool bull, bull1;
    string s;
    cin >> t;
    while (t--)
    {
        bull = bull1 = false;
        memset(arr, 0, sizeof(arr));
        cin >> k >> s;
        for (int i = 0; i < k; i++)
        {
            arr[s[i]-48]++;
        }
        if (arr[1] > 0) cout << "1\n" << 1 << '\n';
        else if (arr[4] > 0) cout << "1\n" << 4 << '\n';
        else if (arr[6] > 0) cout << "1\n" << 6 << '\n';
        else if (arr[8] > 0) cout << "1\n" << 8 << '\n';
        else if (arr[9] > 0) cout << "1\n" << 9 << '\n';
        else if (arr[5] > 1) cout << "2\n" << "55\n";
        else if (arr[7] > 1) cout << "2\n" << "77\n";
        else if (arr[3] > 1) cout << "2\n" << "33\n";
        else if (arr[2] > 0)
        {
            if (s[0] == 50)
            {
                for (int i = 1; i < k; i++)
                {
                    if (((s[i])%2 == 0 || s[i] == 49 || s[i] == 53 || s[i] == 55) && (!bull))
                    {
                        cout << "2\n" << 2 << s[i] - 48 << '\n';
                        bull = true;
                    }
                }
            }
            else cout << "2\n" << s[0] << 2 << '\n';
        }
        else
        {
            if (s[0] != 53) cout << "2\n" << s[0] - 48 << 5 << '\n';
            else 
            {
                for (int i = 1; i < k; i++)
                {
                    if ((s[i] == 55) && !bull1)
                    {
                        cout << "2\n" << 5 << s[i] - 48 << '\n';
                        bull1 = true;
                    }
                }
            }
        }


    }

    // code
    return 0;
}