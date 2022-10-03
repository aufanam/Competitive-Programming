#include <bits/stdc++.h>
#define ll long long
using namespace std;
// string bruh(string s)
// {
//     if (s[0] == s[1] == 'O')
//     {
//         s[0] = '+';
//         s[1] = '+';
//         return s;
//     }
//     else if (s[3] == 0)
//     {
//         s = s;
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n;
    string s;
    bool r = false;
    cin >> n;
    queue<string> sQ;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if ((s[0] == 'O' && s[1] == 'O') && !(r))
        {
            s[0] = '+';
            s[1] = '+';
            r = true;
        }
        else if ((s[3] == 'O' && s[4] == 'O') && !(r))
        {
            s[3] = '+';
            s[4] = '+';
            r = true;
        }
        sQ.push(s);
    }

    if (r)
    {
        cout << "YES\n";
        while(!sQ.empty())
        {
            cout << sQ.front() << '\n';
            sQ.pop();
        }
    }
    else
    {
        cout << "NO\n";
    }

    // code
    return 0;
}