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
        cout << pow(2, (n+2)/2) - 2 << '\n';
    }
    // code
    return 0;
}