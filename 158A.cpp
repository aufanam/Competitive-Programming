#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    int n, k, lowest;
    cin >> n >> k;
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    lowest = scores[k-1];

    for (int i = 0; i < n; i++)
    {
        if (scores[i]<lowest || scores[i] <= 0)
        {
            cout << i << endl;
            break;
        }
        else 
        {
            if (i == n-1)
            cout << n << endl;
        }
        
    }
    // code

    return 0;
}