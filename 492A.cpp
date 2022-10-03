#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int arr[45], n, b = 0;
    cin >> n;
    for (int i = 0; i < 45; i++)
    {
        arr[i] = ((pow(i + 1, 3)) - (i + 1)) / 6;
    }
    while (arr[b+1] <= n)
    {
        b++;
    }
    cout << b << '\n';
    // code
    return 0;
}