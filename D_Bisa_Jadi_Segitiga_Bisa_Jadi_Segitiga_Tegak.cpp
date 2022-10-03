#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

int main()
{
        long long a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if ((d - b)*(e - a) == (f - b)*(c - a)) {
                cout << "-1\n";
        } else if (a == c || c == e || e == a) {
                cout << "1\n";
        } else {
                cout << "0\n";
        }
        return 0;
}