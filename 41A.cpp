#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string s, t;

    cin >> s >> t;

    reverse(t.begin(), t.end());

    cout << (t == s ? "YES\n" : "NO\n");

    
    // code

    return 0;
}