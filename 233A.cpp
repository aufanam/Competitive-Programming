#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n;

    cin >> n;

    if (n%2)
    {
        cout << "-1\n";
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
    // code
    return 0;
}