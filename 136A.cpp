#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, p;
    int arr[101];
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        arr[p] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    // code

    return 0;
}