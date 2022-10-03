#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, arr[200000], bruh, c;

    cin >> t;

    while (t--)
    {
        c = 0;
        bruh = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            bruh += arr[i];
        }
        if (bruh % n)
        {
            cout << "-1\n";
        }
        else
        {
            bruh /= n;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > bruh)
                {
                    c++;
                }
            }
            cout << c << '\n';
        }
    }
    // code
    return 0;
}