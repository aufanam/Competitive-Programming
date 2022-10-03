#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string a;
    bool nice = false;
    cin >> a;

    for (int i = 0; i < 5; i++)
    {
        string b;
        cin >> b;
        if (b[0] == a[0] || b[1] == a[1])
        {
            nice = true;
        }
    }
    if (nice)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    // code
    return 0;
}