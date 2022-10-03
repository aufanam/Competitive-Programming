#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, s;
    int arr[50];
    cin >> t;

    while (t--)
    {
        int minStrength = 1000;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            arr[i] = s;
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i+1] - arr[i] < minStrength)
            {
                minStrength = arr[i+1] - arr[i];
            }
        }
        cout << minStrength << '\n';
    }
    // code
    return 0;
}