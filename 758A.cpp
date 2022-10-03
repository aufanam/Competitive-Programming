#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    long long n, a, total = 0;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr + n);

    for (int j = 0; j < n; j++)
    {
        total += (arr[n-1] - arr[j]);
    }

    cout << total << '\n';
    // code
    return 0;
}