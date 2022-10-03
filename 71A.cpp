#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    int n, len;
    string w;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        len = w.length();
        if (len > 10)
        {
            cout << w[0] << len - 2 << w[len-1] << '\n';
        }
        else {
            cout << w << '\n';
        }
    }
    // code

    return 0;
}