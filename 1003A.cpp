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
    int n, a, arr[100];
    cin >> n;
    memset(arr, 0, sizeof(arr));
    while (n--)
    {
        cin >> a;
        arr[a-1]++;
    }
    sort(arr, arr+100, greater<int>());
    cout << arr[0] << '\n';
    // code
    return 0;
}