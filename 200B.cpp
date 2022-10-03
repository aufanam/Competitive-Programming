#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    double n, p, total, bruh;
    total = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        total +=p;
    }

    cout << total/n << '\n';
    // code

    return 0;
}