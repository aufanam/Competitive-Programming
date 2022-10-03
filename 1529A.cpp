#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, arr[100];
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << n - count(arr, arr+n, *min_element(arr, arr+n)) << '\n';
    }
    // code
    return 0;
}