#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n;
    char c;

    cin >> t;

    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> c;
            if (c == 'U')
            {
                c = 'D';
            }
            else if (c == 'D')
            {
                c = 'U';
            }
            cout << c;
        }
        cout << '\n';
    }
    // code
    return 0;
}