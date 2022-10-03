#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int a, b;

    cin >> a >> b;

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < b; j++)
            {
                cout << '#';
            }
            cout << endl;
        }
        else 
        {
            for (int k = 0; k < b; k++)
            {
                if (i % 4 == 2)
                {
                    if (k == b - 1)
                    {
                        cout << '#';
                    }
                    else
                    {
                        cout << '.';
                    }
                }
                else
                {
                    if (k == 0)
                    {
                        cout << '#';
                    }
                    else
                    {
                        cout << '.';
                    }
                }
            }
                cout << endl;
        }
    }
    // code
    return 0;
}