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
    int t;
    set<int> bruh;
    string s;
    bool bull;
    deque<int> dq;
    cin >> t;
    while (t--)
    {
        bruh.clear();
        dq.clear();
        bull = true;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            bruh.insert(s[i]);
            dq.push_back(s[i]);
        }
        if (s.length() != bruh.size())
            cout << "NO\n";
        else
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (dq.front() == letter(i))
                    dq.pop_front();
                else if (dq.back() == letter(i))
                    dq.pop_back();
                else
                    bull = false;
            }
            if (bull)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    // code
    return 0;
}