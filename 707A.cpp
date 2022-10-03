#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, m, nice;
    char b;
    cin >> n >> m;

    for (int i = 0; i < n * m; i++)
    {
        cin >> b;
        if (b == 'C' || b == 'Y' || b == 'M')
        {
            nice++;
        }
    }

    if (nice > 0)
    {
        cout << "#Color" << '\n';
    }
    else
    {
        cout << "#Black&White" << '\n';
    }
    // code
    return 0;
}