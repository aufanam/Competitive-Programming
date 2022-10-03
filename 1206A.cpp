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
    int nA, nB, x, a[100], b[100];
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        cin >> nA;
        for (int i = 0; i < nA; i++)
        {
            cin >> a[i];
        }
        cin >> nB;
        for (int i = 0; i < nB; i++)
        {
            cin >> b[i];
        }
        cout << *max_element(a, a+nA) << ' ' << *max_element(b, b+nB) << '\n';
    // code
    return 0;
}