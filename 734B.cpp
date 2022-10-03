#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    int a, b, c, d, minNih, totalNih = 0;
    cin >> a >> b >> c >> d;
    minNih = min({a, c, d});
    totalNih += minNih*256;
    minNih = min({a - minNih, b});
    totalNih += minNih*32;
    cout << totalNih << '\n';
    // code
    return 0;
}