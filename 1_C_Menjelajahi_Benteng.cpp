`#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int ask(int x, int y) {
        if (x < -100000000 || y < -100000000) return -1;
        cout << "? " << x << ' ' << y << endl;
        int ret;
        cin >> ret;
        return ret;
}
int32_t main()
{
        queue<int> qn, qm;
        int lstx = 100000001;
        int lsty = 100000001;
        int z = 1;
        int dummy;
        for (int i = 123; i < 456789; i++) {
                if (ask(i, i) != 0) {
                        dummy = i;
                        break;
                }
        }
        while (true) {
                if (lstx - z < -100000000 || lsty - z < -100000000) break;
                int ret = ask(lstx - z, lsty - z);
                if (ret == z) {
                        z *= 2;
                } else {
                        lstx = lstx - z;
                        lsty = lsty - z;
                        int aa = lsty;
                        int bb = lstx;
                        if (ask(lstx - ret, dummy) == 0) {
                                qn.push(lstx - ret);
                                if (ask(dummy, lsty - ret) == 0) {
                                        qm.push(lsty - ret);
                                }
                        } else {
                                qm.push(lsty - ret);
                        }
                        lstx -= ret;
                        lsty -= ret;
                        z = 1;
                }
        }
        cout << "! " << qn.size() << ' ' << qm.size() << '\n';
        while (!qn.empty()) {
                cout << qn.front() << ' ';
                qn.pop();
        }
        cout << '\n';
        while (!qm.empty()) {
                cout << qm.front() << ' ';
                qm.pop();
        }
        cout << '\n';
        cout << endl;
        // queue<int> qn, qm;
        // int lst = 100000001;
        // int z = 1;
        // while (true) {
        //         if (lst - z < -100000000) {
        //                 break;
        //         }
        //         cout << "? " << lst - z << ' ' << lst - z << endl;
        //         int ret;
        //         cin >> ret;
        //         if (ret == z) {
        //                 z *= 2;
        //         } else {
        //                 qn.push(lst - z - ret);
        //                 qm.push(lst - z - ret);
        //                 lst = lst - z - ret;
        //                 z = 1;
        //         }
        // }
        // cout << "! "  << qn.size() << ' ' << qm.size() << '\n';
        // while (!qn.empty()) {
        //         cout << qn.front() << ' ';
        //         qn.pop();
        // }
        // cout << '\n';
        // while (!qm.empty()) {
        //         cout << qm.front() << ' ';
        //         qm.pop();
        // }
        // cout << '\n';
        // cout << endl;
        // subsoal 7
        // int ans = 0;
        // queue<int> qn, qm;
        // for (int i = -125000; i <= 125000; i++) {
        //         cout << "? " << i << ' ' << i << endl;
        //         int ret;
        //         cin >> ret;
        //         if (ret == 0) {
        //                 qn.push(i);
        //                 qm.push(i);
        //         }
        // }
        // cout << "! " << qn.size() << ' ' << qm.size() << '\n';
        // while (!qn.empty()) {
        //         cout << qn.front() << ' ';
        //         qn.pop();
        // }
        // cout << '\n';
        // while (!qm.empty()) {
        //         cout << qm.front() << ' ';
        //         qm.pop();
        // }
        // cout << '\n';
        // cout << endl;
        // subsoal 2
        // queue<int> q;
        // for (int i = -125000; i <= 125000; i++) {
        //         cout << "? " << 1 << ' ' << i << endl;
        //         int ret;
        //         cin >> ret;
        //         if (ret == 0) {
        //                 q.push(i);
        //         }
        // }
        // cout << "! " << 0 << ' ' << q.size() << '\n';
        // cout << '\n';
        // while (!q.empty()) {
        //         cout << q.front() << ' ';
        //         q.pop();
        // }
        // cout << '\n';
        // cout << endl;
        // subsoal 1
        // vector<vector<int>> ans(222, vector<int>(222));
        // for (int i = -100; i <= 100; i++) {
        //         for (int j = -100; j <= 100; j++) {
        //                 cout << "? " << i << ' ' << j << endl;
        //                 int ret;
        //                 cin >> ret;
        //                 ans[i+100][j+100] = ret;
        //         }
        // }
        // queue<int> qn, qm;
        // for (int i = -100; i <= 100; i++) {
        //         int res = 0;
        //         for (int j = -100; j <= 100; j++) {
        //                 if (ans[i+100][j+100] == 0) {
        //                         res++;
        //                 }
        //         }
        //         if (res == 201) {
        //                 qn.push(i);
        //         }
        //         res = 0;
        //         for (int j = -100; j <= 100; j++) {
        //                 if (ans[j+100][i+100] == 0) {
        //                         res++;
        //                 }
        //         }
        //         if (res == 201) {
        //                 qm.push(i);
        //         }
        // }
        // cout << "! " << qn.size() << ' ' << qm.size() << '\n';
        // while (!qn.empty()) {
        //         cout << qn.front() << ' ';
        //         qn.pop();
        // }
        // cout << '\n';
        // while (!qm.empty()) {
        //         cout << qm.front() << ' ';
        //         qm.pop();
        // }
        // cout << '\n';
        // cout << endl;
        return 0;
}