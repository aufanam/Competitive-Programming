#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    ll a, b, c, d, aNih = 0, bNih = 0, cNih = 0, dNih = 0; 
    string s;

    cin >> a >> b >> c >> d;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            aNih++;
        }
        else if (s[i] == '2')
        {
            bNih++;
        }
        else if (s[i] == '3')
        {
            cNih++;
        }
        else
        {
            dNih++;
        }
    }

    cout << a*aNih + b*bNih + c*cNih + d*dNih << '\n';
    // code
    return 0;
}