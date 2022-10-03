#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    string s;

    cin >> s;

    int p = s.size();

    int arr[(p+1)/2];

    for (int i = 0; i < p; i+=2)
    {
        arr[i/2]=s[i]-48;

    } 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr + n);

    cout << arr[0];
    for (int i = 1; i < (p+1)/2; i++)
    {
        cout << '+' << arr[i];
    }
    cout << endl;
    // code

    return 0;
}