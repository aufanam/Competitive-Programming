#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int y, w, woi;

    cin >> y >> w;

    woi = max(y, w);

    if (woi == 1)
    {
        cout << "1/1\n";
    }
    else if (woi == 2)
    {
        cout << "5/6\n";
    }
    else if (woi == 3)
    {
        cout << "2/3\n";
    }
    else if (woi == 4)
    {
        cout << "1/2\n";
    }
    else if (woi == 5)
    {
        cout << "1/3\n";
    }
    else if (woi == 6)
    {
        cout << "1/6\n";
    }
    // code
    return 0;
}