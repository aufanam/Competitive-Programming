#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n;

    cin >> n;

    cout << "I hate";
    for (int i = 0; i < n-1; i++)
    {
        if (i % 2 == 0)
        {
            cout << " that I love";
        }
        else
        {
            cout << " that I hate";
        }
    }
    cout << " it" << '\n';
    // code

    return 0;
}