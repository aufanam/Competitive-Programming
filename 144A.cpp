#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, a, maxi, mini, besar, kecil;
    maxi = 0;
    mini = 101;
    besar = 0;
    kecil = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > maxi)
        {
            maxi = a;
            besar = i;
        }
        if (a <= mini)
        {
            mini = a;
            kecil = i;
        }
    }
    if (besar > kecil)
    {
        besar--;
    }

    cout << (besar - 1) + (n - kecil) << '\n';
    // code

    return 0;
}