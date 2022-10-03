#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    string s;

    cin >> s;
    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    if (m.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    // code

    return 0;
}