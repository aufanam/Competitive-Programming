#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, a, genap, ganjil, notAccurate;

    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            genap = ganjil = notAccurate = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cin >> a;
                    if (a % 2 == 0)
                    {
                        genap++;
                    }
                    else
                    {
                        ganjil++;
                        notAccurate++;
                    }
                }
                else
                {
                    cin >> a;
                    if (a % 2 == 1)
                    {
                        ganjil++;
                    }
                    else
                    {
                        genap++;
                        notAccurate++;
                    }
                }
            }
            if (genap == ganjil)
            {
                cout << notAccurate / 2 << '\n';
            }
            else
            {
                cout << "-1" << '\n';
            }
        }
        else
        {
            genap = ganjil = notAccurate = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cin >> a;
                    if (a % 2 == 0)
                    {
                        genap++;
                    }
                    else
                    {
                        ganjil++;
                        notAccurate++;
                    }
                }
                else
                {
                    cin >> a;
                    if (a % 2 == 1)
                    {
                        ganjil++;
                    }
                    else
                    {
                        genap++;
                        notAccurate++;
                    }
                }
            }
            if (genap == ganjil + 1)
            {
                cout << notAccurate/2 << '\n';
            }
            else
            {
                cout << "-1" << '\n';
            }
        }
    }
    // code
    return 0;
}