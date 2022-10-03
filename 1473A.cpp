#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, d, a, arr[100];

    cin >> t;

    while (t--)
    {
        cin >> n >> d;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort (arr, arr + n);
        if (arr[0] + arr[1] <= d || arr[n-1] <= d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    // code
    return 0;
}