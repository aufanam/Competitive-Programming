#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
int ask(int x, int y) {
        cout << "? " << x << ' ' << y << endl;
        int ret;
        cin >> ret;
        return ret;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int r, c, q;
        cin >> r >> c >> q;
        int ans1, ans2, ans3, ans4;
        ans1 = ask(1, 1);
        ans2 = ask(r, 1);
        ans3 = ask(1, c);
        ans4 = ask(r, c);
        /*
        2b + r - 3 = ans1 + ans2
        
        */
        return 0;
}