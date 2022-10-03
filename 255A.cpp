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
    int n, a, chst = 0, bcps = 0, bck = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i%3 == 1) chst += a;
        else if (i%3 == 2) bcps += a;
        else bck += a;
    }
    if (bck > chst && bck > bcps) cout << "back\n";
    else if (chst > bck && chst > bcps) cout << "chest\n";
    else cout << "biceps\n";
    // code
    return 0;
}