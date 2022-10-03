#include <bits/stdc++.h>
#define int                                                             long long
#define tc                                                              int t; cin >> t; while(t--) {solve();}
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int calc(const string &s, char c) {
        if (s.length() == 1) {
                return s[0] != c;
        }
        int mid = s.length()/2;
        int cnt1 = calc(s.substr(0, mid), c + 1);
        cnt1 += s.length()/2 - count(s.begin() + mid, s.end(), c);
        int cnt2 = calc(s.substr(mid, s.length() - mid), c + 1);
        cnt2 += s.length()/2 - count(s.begin(), s.begin() + mid, c);
        return min(cnt1, cnt2);
}
void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << calc(s, 'a') << '\n';
        return;
}

int32_t main()
{
        Aufan
        tc
        return 0;
}