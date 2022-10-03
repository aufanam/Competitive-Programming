#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a;

    cin >> t;
    while (t--)
    {
        int arr[100];
        arr[0] = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[i] = a * 1000 + i;
        }
        sort(arr, arr + n);
        if (arr[1] - arr[0] <= 2)
        {
            cout << arr[n-1] % 1000 + 1<< '\n';
        }
        else
        {
            cout << arr[0] % 1000 + 1 << '\n';
        }
    }
    // code
    return 0;
}