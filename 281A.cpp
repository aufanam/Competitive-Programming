#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    string a;

    cin >> a;

    int b = a[0];

    int ib = (int)b;

    if (ib > 96)
    {
        ib -= 32;
    }

    a[0] = ib;

    cout << a << endl;

    
    // code

    return 0;
}