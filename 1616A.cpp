#include <bits/stdc++.h>
#define ll long long
using namespace std;
int modnonol(int a, int b)
{
    if (a%b) return a%b;
    else return b;
}
string balik(string s)
{
    reverse(s.begin(), s.end());
    return s;
}
int digitsum(int a)
{
    int b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    return b;
}
int factorial(int a)
{
    ll b = 1;
    while (a > 0)
    {
        b *= a;
        a--;
    }
    return b;
}
int ceildiv(int a, int b)
{
    int q;
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
    int t, n, a, arr[201], c;
    set<int> iyh;
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        c = 0;
        iyh.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[a+100]++;
            iyh.insert(a);
        }
        for (int i = 0; i < 200; i++)
        {
            if (arr[i] > 1)
            {
                if (arr[200 - i] == 0) c++;
            }
        }
        cout << iyh.size() + c << '\n';
    }
    // code
    return 0;
}