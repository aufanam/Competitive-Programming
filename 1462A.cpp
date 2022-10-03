#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n;
    cin >> t;

    while (t--)
    {
        int arr[300];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                cout << arr[n-1-i/2] << ' ';
            }
            else
            {
                cout << arr[i/2] << ' ';
            }
        }
        cout << '\n';
    }
    // code
    return 0;
}