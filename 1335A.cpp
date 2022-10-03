#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n%2)
        {
            cout << (n-1)/2 << '\n';
        }
        else 
        {
            cout << (n-2)/2 << '\n';
        }
    }
    
    // code

    return 0;
}