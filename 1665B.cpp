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
    ll t, n, arr[100000], c, maxxx;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        c = 1;
        maxxx = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i-1]) c++;
            else
            {
                if (c > maxxx)
                {
                    maxxx = c;
                }
                c = 1;
            }
        }
        if (c > maxxx) maxxx = c;
        cout << ceil(log2((double)n/(double)maxxx)) + n - maxxx << '\n';
    }
    // code
    return 0;
}