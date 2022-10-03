#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, a, sereja = 0, dima = 0;
    deque<int> bruh;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        bruh.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            if (bruh.front() > bruh.back())
            {
                dima += bruh.front();
                bruh.pop_front();
            }
            else
            {
                dima += bruh.back();
                bruh.pop_back();
            }
        }
        else
        {
            if (bruh.front() > bruh.back())
            {
                sereja += bruh.front();
                bruh.pop_front();
            }
            else
            {
                sereja += bruh.back();
                bruh.pop_back();
            }
        }
    }
    cout << sereja << ' ' << dima << '\n';
    // code
    return 0;
}