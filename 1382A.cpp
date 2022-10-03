#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, m, a[1000], b[1000], nice;

    cin >> t;
    while (t--)
    {
        nice = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    nice = a[i];
                }
            }
        }
    if (nice) cout << "YES\n" << "1 " << nice << '\n';
    else cout << "NO\n";
    }

     // code
     return 0;
}