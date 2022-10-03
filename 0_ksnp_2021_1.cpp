#include <bits/stdc++.h>

using namespace std;

int main()
{
        set<long long> buset;
        buset.insert(1);
        map<long long, bool> vis;
        while (true) {
                long long cnt = 0;
                bool bull = true;
                long long lst;
                for (auto it = buset.begin(); it != buset.end(), cnt < 2021; it++) {
                        cnt++;
                        if (vis[*it]) {
                                lst = *it;
                                continue;
                        }
                        bull = false;
                        buset.insert(*it*5);
                        buset.insert(*it + 100);
                        vis[*it] = true;
                }
                if (bull) {
                        cout << lst << '\n';
                        return 0;
                }
        }
        return 0;
}