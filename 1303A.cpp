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
    q = a / b + (a % b != 0);
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
    int t, len, nol, hitung;
    string s;
    cin >> t;
    bool mulai;
    while (t--)
    {
        cin >> s;
        len = s.length();
        mulai = nol = hitung = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                mulai = true;
                hitung += nol;
                nol = 0;
            }
            else if (mulai) nol++;
        }
        cout << hitung << '\n';
    }
    // code
    return 0;
}