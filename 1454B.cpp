#include <bits/stdc++.h>
#define guedeTenan 200001
#define ll long long
using namespace std;

int fungsiNih(int i)
{
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a[guedeTenan], o[guedeTenan], m, mi;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(o, 0, sizeof(o));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            o[a[i]]++;
        }
        m = guedeTenan;
        mi = -2;
        for (int i = 0; i < n; i++)
        {
            if (o[a[i]] == 1 && a[i] < m)
            {
                m = a[i];
                mi = i;
            }
        }
        cout << mi+1 << '\n';
    }
    // code
    return 0;
}