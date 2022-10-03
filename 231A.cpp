#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    int n, a, total, hasil;
    cin >> n;
    hasil = 0;
    for (int i = 0; i < n; i++)
    {
        total = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a;
            total += a;
        }
        if (total > 1)
        {
            hasil++;
        }
    }
    cout << hasil << endl;
    // code

    return 0;
}