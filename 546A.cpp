#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    ll k, n, w;

    cin >> k >> n >> w;

    ll a = k*(w*(w+1)/2);

    if (n < a)
    {
        cout << a-n << endl;
    }
    else 
        cout << 0 << endl;

    // code

    return 0;
}