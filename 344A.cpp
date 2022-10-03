#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, b;
    int arr[100000];
    int total = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        arr[i] = b;
        if (i > 0 && arr[i] != arr[i-1])
        {
            total++;
        }
    }

    cout << total << '\n';
    // code

    return 0;
}