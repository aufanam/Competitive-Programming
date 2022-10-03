#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, arr[26], lttr;
    string s, ss;
    bool bull;

    cin >> t;

    while (t--)
    {
        cin >> n;
        ss = "";
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            ss += s;
        }
        lttr = ss.length();
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < lttr; i++)
        {
            arr[ss[i] - 97]++;
        }

        bull = true;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % n)
            {
                bull = false;
                break;
            }
        }
        
        if (bull)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    // code
    return 0;
}