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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a[100], b[100], nice, bruh;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] > b[i])
            {
                swap(a[i], b[i]);
            }
        }
        nice = *max_element(a, a+n);
        bruh = *max_element(b, b+n);
        cout << bruh*nice << '\n';
    }
    // code
    return 0;
}