#include <bits/stdc++.h>
#define ll long long
using namespace std;

int convertChar(char c)
{
    int ic = (int)c;
    if (ic > 96)
    {
        return ic - 32;
    }
    return ic;
}

int compareStrings(string a, string b)
{
    int ia, ib;

    for (int i = 0; i < a.size(); i++)
    {
        ia = convertChar(a[i]);
        ib = convertChar(b[i]);

        if (ia > ib)
            return 1;
        else if (ia < ib)
            return -1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // code
    string a, b;
    
    cin >> a >> b;

    cout << compareStrings(a, b) << endl;
    // code

    return 0;
}