#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int y, b;

    cin >> y;

    b = y;

    for (int i = 0; i < 9000; i++)
    {
        y++;
        string w = to_string(y);
        if (!(w[0]==w[1] || w[1]==w[2] || w[2]==w[3] || w[0]==w[2] || w[0]==w[3] || w[1]==w[3]))
        {
            b = y;
            break;
        }
    }

    cout << b << '\n';
    // code

    return 0;
}