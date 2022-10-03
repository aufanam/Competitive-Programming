#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    double n, m, a;

    cin >> n >> m >> a;

    ll z = ceil(n/a)*ceil(m/a);
    cout << z << endl;
    // code

    return 0;
}