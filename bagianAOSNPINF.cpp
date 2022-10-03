#include <bits/stdc++.h>

using namespace std;
// vector<vector<int>> v(10);
// vector<bool> vis(10, false);
// int cnt = 0;
// void dfs(int x) {
//         if (x == 8) {
//                 cnt++;
//                 return;
//         }
//         vis[x] = true;
//         for (auto z : v[x]) {
//                 if (!vis[z]) {
//                         dfs(z);
//                 }
//         }
//         vis[x] = false;
// }
// vector<int> v(10);
// vector<int> vis(10, false);
// int ans = 0;
// void coba(int cnt) {
//         if (cnt == 9) {
//                 if (v[8] == 1 && v[1] == v[2] + 1 && v[1] > v[3] && abs(v[4] - v[7]) == 3) ans++;
//                 return;
//         }
//         for (int i = 1; i <= 8; i++) {
//                 if (!vis[i]) {
//                         vis[i] = true;
//                         v[i] = cnt;
//                         coba(cnt + 1);
//                         vis[i] = false;
//                 }
//         }
// }
int main() 
{
        // 1
        // v[8] = 1;
        // vis[8] = true;
        // coba(2);
        // cout << ans << '\n';
        // 2
        // string xx = "?INFORMATIC";
        // int z = 1;
        // for (int i = 1; i <= 2022; i++) {
        //         z = (z*2)%10;
        // }
        // int zz = 1;
        // for (int i = 1; i <= 2023; i++) {
        //         zz = (zz*3)%10;
        // }
        // cout << xx[z] << xx[zz] << '\n';
        // 3
        // cout << (6*5*4/3/2/1)*(6*5*4/3/2/1) - (5*4/2/1)*(5*4/2/1)<< '\n';
        // 4
        // int ans = 0;
        // for (int i = 0; i <= 3; i++) {
        //         for (int j = 0; j <= 3; j++) {
        //                 for (int k = 0; k <= 5; k++) {
        //                         for (int l = 0; l <= 10; l++) {
        //                                 for (int m = 0; m <= 5; m++) {
        //                                         int kal = i*91 + j*71 + k*105 + l*103 + m*96;
        //                                         int cost = i*2360 + j*2120 + k*1890 + l*3770 + m*2870;
        //                                         if (cost <= 25000) {
        //                                                 ans = max(ans, kal);
        //                                                 if (kal == 1066) {
        //                                                         cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << m << '\n';
        //                                                         cout << cost << '\n';
        //                                                 }
        //                                         }
        //                                 }
        //                         }
        //                 }
        //         }
        // }
        // cout << ans << '\n';
        // 5
        // cout << (24/2)*(22/2) << '\n';
        // 6
        // cout << 25 + 35 + 50 + 70 + 95 + 125 << '\n';
        // cout << ((35*10 + 50*20 + 70*30 + 95*40 + 125*50)*1000 + 22500000)/400 << '\n';
        // cout << 25*9 + 35*8 + 50*7 + 70*6 + 95*5 + 125*4 << '\n';
        // 7
        // kwak
        // 8
        // for (int i = 1; i <= 13; i++) {
        //         int a, b;
        //         cin >> a >> b;
        //         v[a].push_back(b);
        // }
        // dfs(1);
        // cout << cnt << '\n';
        // 9
        // cout << 4 << '\n';
        // 10
        // int permen = 100;
        // for (int i = 1; i <= 1000; i++) {
        //         if (i%7 == 0) {
        //                 permen += 5;
        //         }
        //         if (i%3 == 0) {
        //                 permen -= min(permen, 3);
        //         }
        //         if (permen <= 0) {
        //                 cout << i << '\n';
        //                 return 0;
        //         }
        // }
        return 0;
}