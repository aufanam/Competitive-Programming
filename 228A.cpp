#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int a, b, c, d, total;
    total = 0;

    cin >> a >> b >> c >> d;

    if (a==b)
    {
        total++;
    }
    
    if (a==c)
    {
        total++;
    }
    
    if (a==d)
    {
        total++;
    }
    
    if (b==c)
    {
        total++;
    }
    
    if (b==d)
    {
        total++;
    }
    
    if (c==d)
    {
        total++;
    }

    if (total==0)
    {
        cout << 0 << '\n';
    }
    
    if (total==1)
    {
        cout << 1 << '\n';
    }
    
    if (total==2)
    {
        cout << 2 << '\n';
    }
    
    if (total==3)
    {
        cout << 2 << '\n';
    }
    
    if (total==6)
    {
        cout << 3 << '\n';
    }
    // code

    return 0;
}