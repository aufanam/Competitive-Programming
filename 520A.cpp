#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    bool arr[26] = {};
    int n;
    string a;
    cin >> n >> a;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 97)
        {
            arr[a[i] - 97] = true;
        }
        else
        {
            arr[a[i] - 65] = true;
        }
    }

    if (accumulate(arr, arr + 26, 0) == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    // code

    return 0;
}