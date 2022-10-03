#include <bits/stdc++.h>

using namespace std;


int ceildiv(int a, int b) {
        int q;
        q=a/b + (a%b!=0);
        return q;
}

int main()
{
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        if (n == 1) {
                cout << 1 << ' ' << v[0] - 1 << '\n';
                return 0;
        }
        for (int i = 0; i < n - 1; i++) {
                if (v[i] > v[i+1]) {
                        cout << "-1\n";
                        return 0;
                }
        }
        if (n > 1) {
                if (v[n-1] == v[n-2]) {
                        cout << "-1\n";
                        return 0;
                }
        }
        int mx = v[n-2]*2 - 1;
        for (int i = n - 3; i >= 0; i--) {
                int z = ((mx + v[i])/v[i])*v[i] - 1;
                mx = z;
        }
        int mn = v[n-2];
        for (int i = n - 3; i >= 0; i--) {
                int z = (ceildiv(mn, v[i]))*v[i];
                mn = z;
        }
        cout << mn << ' ' << mx << '\n';
        return 0;
}