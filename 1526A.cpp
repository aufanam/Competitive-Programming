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
    ll t, n, a, arr[50];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+2*n);
        for (int i = 0; i < 2*n; i++)
        {
            if (i%2 == 0) cout << arr[i/2] << ' ';
            else cout << arr[2*n-((i+1)/2)] << ' ';
        }
        cout << '\n';
    }
    // code
    return 0;
}