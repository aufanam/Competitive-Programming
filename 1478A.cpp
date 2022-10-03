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
    int t, n, a, arr[101];
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[a]++;
        }
        cout << *max_element(arr, arr+n+1) << '\n';
    }

    // code
    return 0;
}