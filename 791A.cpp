#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    double a, b, i;
    i = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 1.5;
        i++;
    }

    cout << i << endl;
    
    // code

    return 0;
}