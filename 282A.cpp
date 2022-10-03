#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    string w;
    int n, x;

    cin >> n;
    x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        if (w[1] == '+')
        {
            x++;  
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    // code

    return 0;
}