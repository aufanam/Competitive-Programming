#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a;

    cin >> t;

    while (t--)
    {
        cin >> n;
        n*=2;

        bitset<51> bocah;
        while (n--)
        {
            cin >> a;
            if (!bocah[a])
            {
                cout << a << ' ';
            }
            bocah[a] = true;
        }
        cout << '\n';
    }
    // code
    return 0;
}