#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, panjangS, arr[26];
    string s;

    cin >> t;

    while (t--)
    {
        cin >> s;
        panjangS = s.length();
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < panjangS; i++)
        {
            arr[s[i]-97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 2)
            {
                arr[i] = 2;
            }
        }
        cout << accumulate(arr, arr + 26, 0)/2 << '\n';
    }
    // code
    return 0;
}