#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    char c;
    int q, a, qLagi;
    q = a = qLagi = 0;
    while (cin >> c)
    {
        if (c == 'Q')
        {
            q++;
            qLagi+=a;
        }
        else if (c == 'A')
        {
            a+=q;
        }
    }
    cout << qLagi << '\n';
    // code
    return 0;
}