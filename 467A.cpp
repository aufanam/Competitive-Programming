#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, p, q, total;
    total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (q - p >= 2)
        {
            total++;
        }
    }

    cout << total << endl;
    // code

    return 0;
}