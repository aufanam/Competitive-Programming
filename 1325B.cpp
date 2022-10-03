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
        set<int> s;
        while (n--)
        {
            cin >> a;
            s.insert(a);
        }
        cout << s.size() << '\n';
    }
    // code
    return 0;
}