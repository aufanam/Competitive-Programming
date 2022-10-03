#include <bits/stdc++.h>
#define ll long long
using namespace std;
int factorial(int a)
{
    ll b = 1;
    while (a > 0)
    {
        b *= a;
        a--;
    }
    return b;
}
int ceildiv(int a, int b)
{
    int q;
    q = a/b + (a % b != 0);
    return q;
}
char letter(int n)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    return alphabet[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int t, arr[26];
    string s;
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            arr[s[i]-97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 2)
            {
                cout << letter(i) << letter(i);
                arr[i] = 0;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 1)
            {
                cout << letter(i);
            }
        }
        cout << '\n';
    }
    // code
    return 0;
}