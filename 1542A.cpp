#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, bruh;

    cin >> t;

    while (t--)
    {
        cin >> n;
        n *= 2;
        bruh = 0;
        while (n--)
        {
            cin >> a;
            if (a%2)
            {
                bruh++;
            }
            else
            {
                bruh--;
            }
        }
        if (bruh)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    // code
    return 0;
}