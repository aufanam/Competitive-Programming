#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, s, r;
    char c;

    cin >> n;
    s = r = 0;

    while (cin >> c)
    {
        if (c == 'x')
        {
            s++;
            if (s >= 3)
            {
                r++;
            }
        }
        else
        {
            s = 0;
        }
    }
    cout << r << '\n';
    // code
    return 0;
}