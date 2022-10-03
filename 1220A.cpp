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
    int n, zNih = 0, nNih = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z') zNih++;
        else if (s[i] == 'n') nNih++;
    }
    while (nNih > 0)
    {
        cout << "1 ";
        nNih--;
    }
    while (zNih > 0)
    {
        cout << "0 ";
        zNih--;
    }
    cout << '\n';
    // code
    return 0;
}