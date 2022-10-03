#include <bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string s;
        while (getline(cin, s)) {
                cout << "\"" << s << "\\r" << "\"" << "," << '\n';
        }
        return 0;
}