#include <bits/stdc++.h>
#define ll long long
using namespace std;

void answer()
{
    int arr[50], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i+1] - arr[i] > 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t;
    cin >> t;

    while (t--)
    {
        answer();
    }

    // code
    return 0;
}