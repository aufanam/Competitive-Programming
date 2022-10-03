#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string a, b;

    cin >> a >> b;

    for (int i = 0; i < a.length();i++)
    {
        cout << (a[i] == b[i] ? 0 : 1);
    }
    cout << '\n';
    

    // code

    return 0;
}
