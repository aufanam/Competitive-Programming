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
    q = a / b + (a % b != 0);
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
    int t, n, a, arr[100], c;
    queue<int> q;
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        cout << arr[0] << ' ';
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                q.push(arr[i]);
                c++;
            }
            else cout << arr[i] << ' ';
        }
        for (int i = 0; i < c; i++)
        {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << '\n';
    }
    // code
    return 0;
}