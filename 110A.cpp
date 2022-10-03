#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll countLucky(string a)
{
    return count(a.begin(), a.end(), '4') + count(a.begin(), a.end(), '7');
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string n;

    cin >> n;

    string nLuck = to_string(countLucky(n));

    cout << (nLuck.length() == countLucky(nLuck) ? "YES\n": "NO\n");
 

    // code

    return 0;
}