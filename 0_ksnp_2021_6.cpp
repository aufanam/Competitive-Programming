#include <bits/stdc++.h>

using namespace std;
int chk(vector<int> v) {
        int a = v[0], b = v[1], c = v[2], d = v[3];
        return ((((a and !b) or c) and (c or !(d and a)) and (!b or c or !d)) or (a and !c and d));
}
int main()
{
        int cnt = 0;
        for (int i = 0; i < 16; i++) {
                int z = i;
                vector<int> v(4);
                for (int j = 0; j < 4; j++) {
                        if (z%2) v[j] = 1;
                        else v[j] = 0;
                        z /= 2;
                }
                if (chk(v)) cnt++;
        }
        cout << cnt << '\n';
        return 0;
}