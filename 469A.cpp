#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, p, q, a;
    set<int> s;
    cin >> n;

    cin >> p;
    {  
        for (int i = 0; i < p; i++)
        {
            cin >> a;
            s.insert(a);
        }
    }
    cin >> q;
    {
        for (int i = 0; i < q; i++)
        {
            cin >> a;
            s.insert(a);
        }
    }
    if (s.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    // code

    return 0;
}