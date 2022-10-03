#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    double n;
    string s;

    cin >> n >> s;

    int k = count(s.begin(), s.end(), 'A');

    if (k < n/2)
    {
        cout << "Danik\n";
    }
    else if (k > n/2)
    {
        cout << "Anton\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    // code

    return 0;
}