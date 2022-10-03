#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t;
    string n;
    cin >> t;
    bool bull;
    while (t--)
    {
        bull = false;
        cin >> n;
        if (n[n.length()-1] % 2 == 0)
        {
            cout << "0\n";
        }
        else if (n[0] % 2 == 0)
        {
            cout << "1\n";
        }
        else 
        {
            for (int i = 0; i < n.length(); i++)
            {
                if (n[i] % 2 == 0)
                {
                    bull = true;
                }
            }
            if (bull)
            {
                cout << "2\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }
    // code
    return 0;
}