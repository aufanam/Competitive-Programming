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
    int t, n, a, arr[100];
    bool b;
    for (int i = 1; i <= 100; i++)
    {
        arr[i-1] = i*i;
    }
    cin >> t;
    while (t--)
    {
        b = false;   
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (find(arr, arr+100, a) == end(arr))
            {
                b = true;
            }
        }
        if (b) cout << "YES\n";
        else cout << "NO\n";
    }
    // code
    return 0;
}