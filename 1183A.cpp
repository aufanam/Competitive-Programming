#include <bits/stdc++.h>
#define ll long long
using namespace std;
int digitsum(ll a)
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
    int a;
    bool benar = false;
    cin >> a;
    do
    {
        if (digitsum(a) % 4 == 0) benar = true;
        else a++;
    } while (!benar);
    cout << a << '\n';
    
    // code
    return 0;
}