#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, arr[50000];

    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0]+arr[1] > arr[n-1])
        {
            cout << "-1\n";
        }
        else
        {
            cout << "1 " << "2 " << n << '\n';
        }
    }
    // code
    return 0;
}