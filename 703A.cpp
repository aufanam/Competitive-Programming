#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, m, c, mWin = 0, cWin = 0;

    cin >> n;

    while (n--)
    {
        cin >> m >> c;
        if (m > c)
        {
            mWin++;
        }
        if (c > m)
        {
            cWin++;
        }
    }
    if (mWin > cWin)
    {
        cout << "Mishka\n";
    }
    else if (cWin > mWin)
    {
        cout << "Chris\n";
    }
    else
    {
        cout << "Friendship is magic!^^\n";
    }
    // code
    return 0;
}