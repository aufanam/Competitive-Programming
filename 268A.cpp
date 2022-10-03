#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, bocah = 0;
    int home[30], away[30];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> away[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home[i] == away[j])
            {
                bocah++;
            }
        }
    }

    cout << bocah << '\n';
    // code

    return 0;
}