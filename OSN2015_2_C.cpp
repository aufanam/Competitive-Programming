#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
char letter(int n)                                                      {string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}
string ask(string x) {
        cout << "TANYA " << x << endl;
        string ret;
        cin >> ret;
        return ret;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string subsoal;
        cin >> subsoal;
        int n, k;
        cin >> n >> k;
        vector<int> cnt(26, 0);
        int cur = n;
        if (subsoal[1] == '1') {
                for (char c = 'A'; c <= 'B'; c++) {
                        int l = 0;
                        int r = cur;
                        int ok;
                        while (l <= r) {
                                if (l == r) {
                                        ok = l;
                                        break;
                                }
                                int m = (l + r)/2;
                                string b(m, c);
                                if (ask(b) == "YA") {
                                        ok = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        cnt[c - 'A'] = ok;
                        cur -= ok;
                }
                cnt[2] = cur;
                deque<char> dq;
                vector<char> zz;
                for (int i = 0; i < 26; i++) {
                        if (cnt[i] > 0) {
                                zz.push_back(letter(i+26));
                        }
                }
                vector<bool> vis(zz.size() + 5, false);
                vis[0] = true;
                dq.push_back(zz.front());
                int done = 1;
                bool frontfix = false;
                bool backfix = false;
                while (done < zz.size()) {
                        bool cmpfr = false, cmpbk = false;
                        for (int i = 0; i < zz.size(); i++) {
                                if (vis[i]) continue;
                                string b(2, 'A');
                                if (!cmpbk && !backfix) {
                                        b[0] = dq.back();
                                        b[1] = zz[i];
                                        string rt = ask(b);
                                        if (rt == "YA") {
                                                dq.push_back(zz[i]);
                                                vis[i] = true;
                                                done++;
                                                cmpbk = true;
                                        }
                                }
                        }
                        if (!cmpbk) {
                                backfix = true;
                        }
                        for (int i = 0; i < zz.size(); i++) {
                                if (vis[i]) continue;
                                string b(2, 'A');
                                if (!cmpfr && !frontfix) {
                                        b[0] = zz[i];
                                        b[1] = dq.front();
                                        string rt = ask(b);
                                        if (rt == "YA") {
                                                dq.push_front(zz[i]);
                                                vis[i] = true;
                                                done++;
                                                cmpfr = true;
                                        }
                                }
                        }
                        if (!cmpfr) {
                                frontfix = true;
                        }
                }
                cout << "JAWAB ";
                for (;!dq.empty();dq.pop_front()) {
                        int z = dq.front() - 'A';
                        for (int i = 0; i < cnt[z]; i++) {
                                cout << dq.front();
                        }
                }
                cout << endl;
                return 0;
        }
        if (subsoal[3] == '3') {
                for (int i = 0; i < 26; i++) {
                        cnt[i] = 1;
                }
                deque<char> dq;
                vector<char> zz;
                for (int i = 0; i < 26; i++) {
                        if (cnt[i] > 0) {
                                zz.push_back(letter(i+26));
                        }
                }
                vector<bool> vis(zz.size() + 5, false);
                vis[0] = true;
                dq.push_back(zz.front());
                int done = 1;
                bool frontfix = false;
                bool backfix = false;
                while (done < zz.size()) {
                        bool cmpfr = false, cmpbk = false;
                        for (int i = 0; i < zz.size(); i++) {
                                if (vis[i]) continue;
                                string b(2, 'A');
                                if (!cmpbk && !backfix) {
                                        b[0] = dq.back();
                                        b[1] = zz[i];
                                        string rt = ask(b);
                                        if (rt == "YA") {
                                                dq.push_back(zz[i]);
                                                vis[i] = true;
                                                done++;
                                                cmpbk = true;
                                        }
                                }
                        }
                        if (!cmpbk) {
                                backfix = true;
                        }
                        for (int i = 0; i < zz.size(); i++) {
                                if (vis[i]) continue;
                                string b(2, 'A');
                                if (!cmpfr && !frontfix) {
                                        b[0] = zz[i];
                                        b[1] = dq.front();
                                        string rt = ask(b);
                                        if (rt == "YA") {
                                                dq.push_front(zz[i]);
                                                vis[i] = true;
                                                done++;
                                                cmpfr = true;
                                        }
                                }
                        }
                        if (!cmpfr) {
                                frontfix = true;
                        }
                }
                cout << "JAWAB ";
                for (;!dq.empty();dq.pop_front()) {
                        int z = dq.front() - 'A';
                        for (int i = 0; i < cnt[z]; i++) {
                                cout << dq.front();
                        }
                }
                cout << endl;
                return 0;
        }
        for (char c = 'A'; c <= 'Z'; c++) {
                int l = 0;
                int r = cur;
                int ok;
                while (l <= r) {
                        if (l == r) {
                                ok = l;
                                break;
                        }
                        int m = (l + r)/2;
                        string b(m, c);
                        if (ask(b) == "YA") {
                                ok = m;
                                l = m + 1;
                        } else {
                                r = m - 1;
                        }
                }
                cnt[c - 'A'] = ok;
                cur -= ok;
        }
        deque<char> dq;
        vector<char> zz;
        for (int i = 0; i < 26; i++) {
                if (cnt[i] > 0) {
                        zz.push_back(letter(i+26));
                }
        }
        vector<bool> vis(zz.size() + 5, false);
        vis[0] = true;
        dq.push_back(zz.front());
        int done = 1;
        bool frontfix = false;
        bool backfix = false;
        while (done < zz.size()) {
                bool cmpfr = false, cmpbk = false;
                for (int i = 0; i < zz.size(); i++) {
                        if (vis[i]) continue;
                        string b(2, 'A');
                        if (!cmpbk && !backfix) {
                                b[0] = dq.back();
                                b[1] = zz[i];
                                string rt = ask(b);
                                if (rt == "YA") {
                                        dq.push_back(zz[i]);
                                        vis[i] = true;
                                        done++;
                                        cmpbk = true;
                                }
                        }
                }
                if (!cmpbk) {
                        backfix = true;
                }
                for (int i = 0; i < zz.size(); i++) {
                        if (vis[i]) continue;
                        string b(2, 'A');
                        if (!cmpfr && !frontfix) {
                                b[0] = zz[i];
                                b[1] = dq.front();
                                string rt = ask(b);
                                if (rt == "YA") {
                                        dq.push_front(zz[i]);
                                        vis[i] = true;
                                        done++;
                                        cmpfr = true;
                                }
                        }
                }
                if (!cmpfr) {
                        frontfix = true;
                }
        }
        cout << "JAWAB ";
        for (;!dq.empty();dq.pop_front()) {
                int z = dq.front() - 'A';
                for (int i = 0; i < cnt[z]; i++) {
                        cout << dq.front();
                }
        }
        cout << endl;
        return 0;       
}