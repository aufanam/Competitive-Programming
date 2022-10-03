#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n, k;
        cin >> n >> k;
        int cnt = 0;
        while (k%2 == 0) {
                k /= 2;
                cnt++;
        }
        cout << cnt + 1 << '\n';
        return 0;
}