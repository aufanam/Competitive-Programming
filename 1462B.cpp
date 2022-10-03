#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        if (s.substr(0, 4) == "2020" || s.substr(n-4, n) == "2020") cout << "YES\n";
        else if (s.substr(0, 3) == "202" && s.substr(n-1, n) == "0") cout << "YES\n";
        else if (s.substr(0, 2) == "20" && s.substr(n-2, n) == "20") cout << "YES\n";
        else if (s.substr(0, 1) == "2" && s.substr(n-3, n) == "020") cout << "YES\n";
        else cout << "NO\n";
    }
    // code
    return 0;
}