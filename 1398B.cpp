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
    int t, z, c;
    string s;
    priority_queue<int> pq;
    cin >> t;
    while (t--)
    {
        
        c = z = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                if (z > 0) pq.push(z);
                z = 0;
            }
            else z++;
            if ((i == s.length() - 1) && z > 0) pq.push(z);
        }
        for (int i = 1; !pq.empty(); i++)
        {
            if (i%2)
            {
                c += pq.top();
            }
            pq.pop();
            
        }
        cout << c << '\n';
    }
    // code
    return 0;
}