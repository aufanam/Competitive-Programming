#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int a, b = 0;
    string m, n;
    cin >> a >> m >> n;

    for (int i = 0; i < a; i++)
    {
        b += 5-abs(5-abs(m[i] - n[i]));
    }
    cout << b << '\n';

    // code
    return 0;
}