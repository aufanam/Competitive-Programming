#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47}, n, m;

    cin >> n >> m;

    if (arr[find(arr, arr + 14, n) - arr + 1] == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }


    // code
    return 0;
}