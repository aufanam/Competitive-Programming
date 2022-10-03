#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll a, b, c, orangKedua;
    int arr[3];
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr + 3);

    cout << arr[2] - arr[0] << '\n';
    // code
    return 0;
}