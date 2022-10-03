#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll t, n, a, b, total;
    queue<ll> q;
    cin >> t;

    while (t--)
    {
        cin >> n;
        while (n > 0)
        {
            b = pow(10, floor(log10(n)));
            a = (n / b) * b ;
            n -= a;
            q.push(a);
        }
        cout << q.size() << '\n';
        while (!(q.empty()))
        {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << endl;
    }
    // code
    return 0;
}