#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, nice, arr[100];
    string s;

    cin >> t;

    while (t--)
    {
        nice = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            arr[i] = s[i];
        }

        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == '0' && arr[i + 1] == '1' && arr[i + 2] == '0')
            {
                nice++;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == '0' && arr[i + 1] == '0')
            {
                nice += 2;
            }
        }
        cout << nice << '\n';
    }
    // code
    return 0;
}