#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t;
    string b;

    cin >> t;

    while (t--)
    {
        cin >> b;
        cout << b[0];
        for (int i = 1; i < b.length(); i++)
        {
            if (i % 2 == 1)
            {
                cout << b[i];
            }
        }
        cout << '\n';
    }


    // code
    return 0;
}