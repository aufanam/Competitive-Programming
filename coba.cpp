#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for (auto &x : v) {
                for (auto &y : x) {
                        cin >> y;
                }
        }
        for (auto x : v) {
                for (auto y : x) {
                        cout << y << ' ';
                }
                cout << '\n';
        }
        return 0;
}