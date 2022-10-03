#include <bits/stdc++.h>

using namespace std;
int n;
string s;
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<bool> vis(15, false);
string ans = "";
string fin = "ZZZZZZZZZZZ";
bool check(string z) {
        for (int i = 0; i < n - 1; i++) {
                if (z[i] == z[i+1]) return false;
        }
        return true;
}
void coba(int x) {
        if (x == n) {
                if (check(ans)) {
                        if (ans < fin) {
                                fin = ans;
                        }
                }
                return;
        }
        for (int i = 0; i < n; i++) {
                if (!vis[i]) {
                        ans.push_back(s[i]);
                        vis[i] = true;
                        coba(x + 1);
                        vis[i] = false;
                        ans.pop_back();
                }
        }
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> n >> s;
        // // subsoal 1
        // /*
        // ACBACAB
        // ABABCAC
        // */
        // cout << "ABABCAC" << '\n;
        // // subsoal 2
        // cout << s << '\n';
        // // subsoal 3
        // int ca = count(s.begin(), s.end(), 'A');
        // int cb = count(s.begin(), s.end(), 'B');
        // if (ca > cb) {
        //         for (int i = 0; i < cb; i++) {
        //                 cout << "AB";
        //         }
        //         cout << "A\n";
        // } else if (cb > ca) {
        //         for (int i = 0; i < ca; i++) {
        //                 cout << "BA";
        //         }
        //         cout << "B\n";
        // } else {
        //         for (int i = 0; i < ca; i++) {
        //                 cout << "AB";
        //         }
        //         cout << '\n';
        // }
        // // subsoal 4
        // sort(s.begin(), s.end());
        // cout << s << '\n';
        // // subsoal 5
        // coba(0);
        // cout << fin << '\n';
        // subsoal 8
        vector<int> cnt(27, 0);
        for (int i = 0; i < n; i++) {
                cnt[s[i] - 'A']++;
        }
        int cur = 0;
        string ans = "";
        int lst = 27;
        for (int i = 0; i < n; i++) {
                char ok;
                for (int j = 0; j < 26; j++) {
                        if (cnt[j] > 0 && j != lst) {
                                ok = j;
                                break;
                        }
                }
                int mx = 0;
                for (int j = 0; j < 26; j++) {
                        if (j != ok && j != lst) {
                                if (cnt[j] > cnt[mx]) {
                                        mx = j;
                                }
                        }
                }
                if (cnt[mx] > (n - cur)/2) {
                        ans.push_back(alphabet[mx]);
                        cnt[mx]--;
                        lst = mx;
                } else {
                        ans.push_back(alphabet[ok]);
                        cnt[ok]--;
                        lst = ok;
                }
                cur++;
        }
        cout << ans << '\n';
        return 0;
}
