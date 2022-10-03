#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t;

    cin >> t;

    while (t--)
    {
        ll n, nice, nAwal;
        int nahKan;
        cin >> n;
        nAwal = n;
        nice = 0;
        int digit = 0;
        while (n != 0)
        {
            if (0 < n < 10)
            {
                nahKan = n;
            }
            n /= 10;
            digit++;
        }
        for (int i = 0; i < digit; i++)
        {
            nice += nahKan * pow(10, i);
        }
        if (nAwal < nice)
        {
            cout << 9 * (digit - 1) + (nahKan) - 1 << '\n';
        }
        else
        {
            cout << 9 * (digit - 1) + nahKan  << '\n';
        }
    }
    // code
    return 0;
}