#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, xa, ya, xb, yb, xf, yf, l;

    cin >> t;

    while (t--)
    {
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        l = abs(xa-xb) + abs(ya-yb);
        if ((xa==xf && xb==xf && (ya>yf)^(yb>yf)) || (ya==yf && yb==yf && (xa>xf)^(xb>xf)))
        {
            l += 2;
        }
        cout << l << '\n';
    }
    // code
    return 0;
}