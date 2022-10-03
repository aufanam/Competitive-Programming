#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (int)pow(2, floor(log2(n))) - 1 << '\n';
    }
    // code
    return 0;
}