#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, x, y, z, totalX, totalY, totalZ;
    totalX = totalY = totalZ = 0;

    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        totalX += x;
        totalY += y;
        totalZ += z;
    }

    if (totalX == 0 && totalY == 0 && totalZ == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    // code
    return 0;
}