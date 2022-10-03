#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int a, b, n, total;
    total = 0;

    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> n;
        if (n > b)
        {
            total++;
        }
    }

    cout << (a + total) << endl;
    
    // code

    return 0;
}