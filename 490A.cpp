#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int n, k, team = 0;

    cin >> n;

    vector<int> satu;
    vector<int> dua;
    vector<int> tiga;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k == 1)
        {
           satu.push_back(i); 
        }
        if (k == 2)
        {
           dua.push_back(i); 
        }
        if (k == 3)
        {
           tiga.push_back(i); 
        }
    }
    team = min(min(satu.size(), dua.size()), tiga.size());
    cout << team << '\n';

    for (int j = 0; j < team; j++)
    {
        cout << satu[j] << ' ' << dua[j] << ' ' << tiga[j] << '\n';
    }
    
    // code
    return 0;
}