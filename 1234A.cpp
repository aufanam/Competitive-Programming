#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ceildiv(int a, int b)
{
    int q;
    q = a/b + (a % b != 0);
    return q;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, b, maxNih;
    cin >> t;
    while (t--)
    {
        b = 0;
        maxNih = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            b += a;
        }
        cout << ceildiv(b, n) << '\n';
    }
    // code
    return 0;
}