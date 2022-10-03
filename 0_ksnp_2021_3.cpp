#include <bits/stdc++.h>

using namespace std;
int chk(vector<int> v) {
        int ok = 1;
        if (v[0]) ok &= (v[2] == 0);
        else ok &= (v[2] == 1);
        if (v[1]) ok &= (v[0] == 1);
        else ok &= (v[0] == 0);
        if (v[2]) ok &= (accumulate(v.begin(), v.end(), 0) == 3);
        else ok &= (accumulate(v.begin(), v.end(), 0) != 3);
        if (v[3]) ok &= (accumulate(v.begin(), v.end(), 0) == 4);
        else ok &= (accumulate(v.begin(), v.end(), 0) != 4);
        if (v[4]) ok &= (v[5] == 0);
        else ok &= (v[5] == 1);
        if (v[5]) ok &= (v[3] == 0);
        else ok &= (v[3] == 1);
        return ok;
}
int main()
{
        for (int i = 0; i < 64; i++) {
                int z = i;
                vector<int> v(6);
                for (int j = 0; j < 6; j++) {
                        if (z%2) v[j] = 1;
                        else v[j] = 0;
                        z /= 2;
                }
                if (chk(v)) {
                        for (auto z : v) cout << z << ' ';
                        cout << '\n';
                }
        }
        return 0;
}