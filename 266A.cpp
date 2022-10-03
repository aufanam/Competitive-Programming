#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    int a;
    int m = 0;
    string b;

    cin >> a;
    cin >> b;

    for (int i = 0; i < a; i++)
    {
        if (b[i] == b[i+1])
        {
            m++;
        }
    }

    cout << m << endl;

    // code

    return 0;
}