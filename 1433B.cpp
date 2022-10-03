#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, z, m;
    bool start;

    cin >> t;
    while (t--)
    {
        cin >> n;
        z = m = start = 0;
        while (n--)
        {
            cin >> a;
            if (a)
            {
                start = true;
                m += z;
                z = 0;
            }
            else if (start)
            {
                z++;
            }
        }
        cout << m << '\n';
    }
    // code
    return 0;
}