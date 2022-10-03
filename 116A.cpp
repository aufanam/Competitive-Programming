#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    long long n, a, b, m, p;
    cin >> n;
    m = p = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p += b - a;
        if (p > m)
        {
            m = p;
        }
    }
    
    cout << m << endl;

    // code

    return 0;
}
