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
    ll t, n, b, arr[100000], total;
    cin >> t;
    while (t--)
    {
        total = 0;
        memset(arr, 0, sizeof(arr));
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            arr[i] = b;
            total += b;
        }
        sort(arr, arr+n);
        double answer = arr[n-1] + ((double)(total - arr[n-1]))/(double)((n-1));
        cout << fixed << setprecision(12) << answer << '\n';
    }
    // code
    return 0;
}