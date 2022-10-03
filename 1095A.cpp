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
    int n;
    string s;
    cin >> n >> s;
    for (int i = 1; i <= 10; i++)
    {
        if (i*(i+1)/2 <= n) cout << s[i*(i+1)/2-1];
    }
    cout << '\n';
    // code
    return 0;
}