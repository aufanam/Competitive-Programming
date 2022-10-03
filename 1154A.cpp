#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll a, b, c, d;
    int arr[4];
    cin >> a >> b >> c >> d;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    sort(arr, arr + 4);
    cout << arr[3] - arr[0] << ' ' <<arr[3] - arr[1] << ' ' <<arr[3] - arr[2] << '\n';

    // code
    return 0;
}