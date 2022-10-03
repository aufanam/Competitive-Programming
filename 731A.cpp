#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    string s;
    char b, c = 'a';
    int total = 0;

    while (cin >> b)
    {
        total += 13 - abs(13 - abs(b-c));
        c = b;
    } 

    cout << total << '\n';
    // code
    return 0;
}