#include <bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans = 0;
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        for (int k = 0; k < 3; k++) {
                                for (int l = 0; l < 3; l++) {
                                        for (int m = 0; m < 3; m++) {
                                                for (int n = 0; n < 3; n++) {
                                                        for (int o = 0; o < 3; o++) {
                                                                for (int p = 0; p < 3; p++) {
                                                                        for (int q = 0; q < 3; q++) {
                                                                                if (i != l && j != m && k != n && i != j && j != k && l != m && m != n && l != o && m != p && n != q && o != p && p != q) {
                                                                                        ans++;
                                                                                }
                                                                        }
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
        cout << ans << '\n';
        return 0;
}