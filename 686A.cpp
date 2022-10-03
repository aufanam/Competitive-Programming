#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, x, d, sad = 0;
    char c;

    cin >> n >> x;
    while (n--)
    {
        cin >> c >> d;
        if (c == '+')
        {
            x += d;
        }
        else
        {
            if (x < d)
            {
                sad++;
            }
            else
            {
                x -= d;
            }
        }
    }
    cout << x << ' ' << sad << '\n';
    // code
    return 0;
}