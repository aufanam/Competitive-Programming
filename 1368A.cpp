#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, a, b, c, bruh;

    cin >> t;

    while (t--)
    {
        bruh = 0;
        cin >> a >> b >> c;

        while (a <= c)
        {
            if (a > b)
            {
                swap(a, b);
            }
            a += b;
            bruh++;
        }
        cout << bruh << '\n';
    }
    // code
    return 0;
}