#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll k, r, kAwal, bocah = 1;

    cin >> k >> r;
    kAwal = k;
    while (!(k % 10 == r || k % 10 == 0))
    {
        k += kAwal;
        bocah++;
    }

    cout << bocah << '\n';

    // code
    return 0;
}