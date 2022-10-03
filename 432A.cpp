#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, k, y, total = 0;

    cin >> n >> k;

    while (n--)
    {
        cin >> y;
        if (y <= 5 - k)
        {
            total++;
        }
    }

    cout << total/3 << '\n';
    // code
    return 0;
}