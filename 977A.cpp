#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    long long n, k;

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /=10;
        }
        else
        {
            n--;
        }
    }
    
    cout << n << endl;
    // code

    return 0;
}