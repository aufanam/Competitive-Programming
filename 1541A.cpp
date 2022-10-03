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
        if (n % 2)
        {
            cout << "3 1 2" << ' ';
            for (int i = 4; i <= n; i++)
            {
                if (i % 2)
                {
                    cout << i - 1 << ' ';
                }
                else
                {
                    cout << i + 1 << ' ';
                }
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                {
                    cout << i + 1 << ' ';
                }
                else
                {
                    cout << i - 1 << ' ';
                }
            }
        }
        cout << '\n';
    }
    // code
    return 0;
}