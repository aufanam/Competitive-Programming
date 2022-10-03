#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, k, b, c;
    c = 0;
    cin >> n >> k;
    b = 240 - k;

    for (int i = 1; i <= n; i++)
    {
        b -= 5 * i;
        if (b < 0)
        {
        break;
        }
        c = i;
    }

    cout << c << '\n';
    // code

    return 0;
}