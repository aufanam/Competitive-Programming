#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    ll a;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if (a)
            {
                cout << abs(2-i) + abs(2-j) << endl;
            }
        }
    }


    // code

    return 0;
}