#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string a;
    set<char> s;
    getline(cin, a);

    int b = a.length() / 3;
    for (int i = 0; i < b; i++)
    {
        s.insert(a[3*i+1]);
    }
    cout << s.size() << '\n';
    // code

    return 0;
}