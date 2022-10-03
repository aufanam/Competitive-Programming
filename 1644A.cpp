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
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (find(s.begin(), s.end(), 'r') < find(s.begin(), s.end(), 'R') && find(s.begin(), s.end(), 'b') < find(s.begin(), s.end(), 'B') && find(s.begin(), s.end(), 'g') < find(s.begin(), s.end(), 'G'))
        {
            cout << "YES\n";
        }
        else cout << "NO\n";    
    }
    // code
    return 0;
}