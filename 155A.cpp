#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, a, total = 0, maxNih = 0, minNih = 10001;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (i > 0 && (a < minNih || a > maxNih))
        {
            total++;
        }
        if (a < minNih)
        {
            minNih = a;
        } 
        if (a > maxNih)
        {
            maxNih = a;
        }
    }
    cout << total << '\n';
    // code
    return 0;
}