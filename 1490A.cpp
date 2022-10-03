#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, arr[50], c;

    cin >> t;

    while (t--)
    {
        c = 0;
        cin >> n;
        cin >> arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (max(arr[i], arr[i-1]) > 2*min(arr[i], arr[i-1]))
            {
                c += log2((max(arr[i], arr[i-1]) - 1)/min(arr[i], arr[i-1]));
            }
        }
        cout << c << '\n';
    }
    // code
    return 0;
}