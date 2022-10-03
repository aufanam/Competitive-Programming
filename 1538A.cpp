#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, x, y;
    cin >> t;
    while (t--)
    {
        int posSatu = 0, posN = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a == 1)
            {
                posSatu = i;
            }
            if (a == n)
            {
                posN = i;
            }
        }
        x = min(posSatu - 1, posN - 1);
        y = max(posSatu - 1, posN - 1);
        cout << min({y+1, n-x, x+1 + n-y}) << '\n';
    }
    // code
    return 0;
}