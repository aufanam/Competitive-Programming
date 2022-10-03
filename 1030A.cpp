#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, k, bruh;
    bruh = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k)
        bruh++;
    }

    if (bruh > 0)
    {
        cout << "HARD\n";
    }
    else
    {
        cout << "EASY\n";
    }
    // code

    return 0;
}