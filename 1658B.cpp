#include <bits/stdc++.h>
#define ll long long
using namespace std;
int factorialPlus(ll n)
{
    ll a = 1;
    for (int i = 1; i <= n; i++)
    {
        a *= i;
        while (a > 998244353)
        {
            a -= 998244353;
        }
        if (a == 0)
        {
            a++;
        }
        a *= i;
        while (a > 998244353)
        {
            a -= 998244353;
        }
        if (a == 0)
        {
            a++;
        }
        
        
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, b;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n % 2)
        {
            cout << "0\n";
        }
        else
        {
            b = factorialPlus(n/2);
            while (b > 998244353)
            {
                b -= 998244353;
            }
            cout << b << '\n';
        }
    }
    // code
    return 0;
}