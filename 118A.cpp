#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string v = "aiueoy";
    char c;

    while(cin >> c)
    {
        c = tolower(c);
        if (v.find(c) > 5)
        {
            cout << '.' << c;
        }
    }
    cout << '\n';
    // code
    return 0;
}