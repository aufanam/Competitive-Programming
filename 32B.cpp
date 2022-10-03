#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string s;

    cin >> s;

    s = regex_replace(s, regex("--"), "2");
    s = regex_replace(s, regex("-."), "1");
    s = regex_replace(s, regex("\\."), "0");

    cout << s << '\n';
    // code
    return 0;
}