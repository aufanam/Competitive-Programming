#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string a;
    int total = 1, bruh = 0;
    cin >> a;

    for (int i = 1; i < a.length(); i++)
    {
        if (a[i] == a[i - 1])
        {
            total++;
            if (total == 7)
            {
                bruh++;
            }
        }
        else
        {
            total = 1;
        }
    }
    if (bruh == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    // code
    return 0;
}