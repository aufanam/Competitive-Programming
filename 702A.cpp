#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll n, a;
    int arr[100000], total = 1, maxTotal = 1;
    cin >> n;

    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > arr[i - 1])
        {
            total++;
        }
        else
        {
            if (total > maxTotal)
            {
                maxTotal = total;
            }
                total = 1;
        }
        if (i == n - 1 && total > maxTotal)
        {
            maxTotal = total;
        }
    }
    cout << maxTotal << '\n';
    // code
    return 0;
}