#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, n, k, a, b;
    cin >> t;

    while (t--)
    {
        int arrA[30];
        int arrB[30];
        int total = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arrA[i] = a;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            arrB[i] = b;
        }
            sort(arrA, arrA + n);
            sort(arrB, arrB + n, greater<int>());
        for (int i = 0; i < k; i++)
        {
            if (arrA[i] < arrB[i])
            {
                arrA[i] = arrB[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            total += arrA[i];
        }
        cout << total << '\n';
    }
    // code
    return 0;
}