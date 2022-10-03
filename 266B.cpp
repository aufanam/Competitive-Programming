#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    ll n, t;
    string q;

    cin >> n >> t >> q;

    for (int i = 0; i < t; i++)
    {
        q = regex_replace(q, regex("BG"), "GB");
    }

    cout << q << endl;
    // code

    return 0;
}