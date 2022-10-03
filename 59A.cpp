#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    string a;
    cin >> a;
    int w = a.length();
    int u = 0;

    for (int i = 0; i < w; i++)
    {
        if (a[i] < 97)
        {
            a[i] += 32;
            u++;
        }
    }
    
    if (u > w/2)
    {
        for (int i = 0; i < w; i++)
        {
            a[i] -= 32;
        }
    }
    cout << a << '\n';

    // code

    return 0;
}