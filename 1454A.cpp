#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 2; i <=n; i++)
        {
            cout << i << ' ';
        }
        cout << 1 << '\n';
    }
    // code
    return 0;
}