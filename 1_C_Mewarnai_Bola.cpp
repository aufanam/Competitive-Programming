#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
int ask(int l, int r) {
        cout << "? " << l << " " << r << endl;
        int ret;
        cin >> ret;
        return ret;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t, n, q;
        cin >> t >> n >> q;
        if (t == 1 || t == 2) {
                vector<int> col(n+5, -1);
                int lst = 0;
                int c = 0;
                for (int i = 1; i <= n; i++) {
                        int z = ask(1, i);
                        if (z > lst) c++;
                        lst = z;
                        col[i] = c;
                }
                cout << "! ";
                for (int i = 1; i <= n; i++) {
                        cout << col[i] << " ";
                }
                cout << endl;
        } else if (t == 3) {
                int lst1 = 0, lst2 = 0, lst3 = 0;
                vector<int> col(n+5, -1);
                col[1] = 1;
                lst1 = 1;
                int lst = 1;
                for (int i = 2; i <= n; i++) {
                        int z = ask(i-1, i);
                        if (z == 1) {
                                col[i] = col[i-1];
                        } else {
                                if (col[i-1] == 1) {
                                        if (lst2 == 0) {
                                                lst2 = i;
                                                col[i] = 2;
                                        } else {
                                                if (lst3 == 0) {
                                                        int zz = ask(lst2, i);
                                                        if (zz == 2) {
                                                                lst2 = i;
                                                                col[i] = 2;
                                                        } else {
                                                                lst3 = i;
                                                                col[i] = 3;
                                                        }
                                                } else {
                                                        if (lst2 > lst3) {
                                                                int zz = ask(lst2, i);
                                                                if (zz == 2) {
                                                                        lst2 = i;
                                                                        col[i] = 2;
                                                                } else {
                                                                        lst3 = i;
                                                                        col[i] = 3;
                                                                }
                                                        } else {
                                                                int zz = ask(lst3, i);
                                                                if (zz == 2) {
                                                                        lst3 = i;
                                                                        col[i] = 3;
                                                                } else {
                                                                        lst2 = i;
                                                                        col[i] = 2;
                                                                }
                                                        }
                                                }
                                        }
                                } else if (col[i-1] == 2) {
                                        if (lst3 == 0) {
                                                int zz = ask(lst1, i);
                                                if (zz == 2) {
                                                        lst1 = i;
                                                        col[i] = 1;
                                                } else {
                                                        lst3 = i;
                                                        col[i] = 3;
                                                }
                                        } else {
                                                if (lst1 > lst3) {
                                                        int zz = ask(lst1, i);
                                                        if (zz == 2) {
                                                                lst1 = i;
                                                                col[i] = 1;
                                                        } else {
                                                                lst3 = i;
                                                                col[i] = 3;
                                                        }
                                                } else {
                                                        int zz = ask(lst3, i);
                                                        if (zz == 2) {
                                                                lst3 = i;
                                                                col[i] = 3;
                                                        } else {
                                                                lst1 = i;
                                                                col[i] = 1;
                                                        }
                                                } 
                                        }
                                } else if (col[i-1] == 3) {
                                        if (lst1 > lst2) {
                                                int zz = ask(lst1, i);
                                                if (zz == 2) {
                                                        lst1 = i;
                                                        col[i] = 1;
                                                } else {
                                                        lst2 = i;
                                                        col[i] = 2;
                                                }
                                        } else {
                                                int zz = ask(lst2, i);
                                                if (zz == 2) {
                                                        lst2 = i;
                                                        col[i] = 2;
                                                } else {
                                                        lst1 = i;
                                                        col[i] = 1;
                                                }
                                        }
                                }
                        }
                }
                cout << "! ";
                for (int i = 1; i <= n; i++) {
                        cout << col[i] << " ";
                }
                cout << endl;
        } else if (t == 5) {
                vector<int> col(n+5, -1);
                col[1] = 1;
                int lst = 1;
                int idx = -1;
                for (int i = 2; i <= n; i++) {
                        int z = ask(1, i);
                        if (z == lst) {
                                col[i] = col[i-1];
                                idx = i;
                                break;
                        } else {
                                col[i] = col[i-1] + 1;
                        }
                        lst = z;
                }
                if (idx != -1) {
                        for (int i = idx - 1; i >= 1; i--) {
                                int z = ask(i, idx);
                                if (z != idx - i + 1) {
                                        col[idx] = col[i];
                                        break;
                                }
                        }
                        for (int i = idx + 1; i <= n; i++) {
                                col[i] = i - 1;
                        }
                }
                cout << "! ";
                for (int i = 1; i <= n; i++) {
                        cout << col[i] << " ";
                }
                cout << endl;
        } else if (t == 6 || t == 7) {
                vector<int> col(n+5, -1);
                col[1] = 1;
                int c = 1;
                for (int i = 2; i <= n; i++) {
                        int l = 1;
                        int r = i - 1;
                        int pos = -1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                int zz = ask(m, i);
                                set<int> buset;
                                for (int k = m; k <= i - 1; k++) {
                                        buset.insert(col[k]);
                                }
                                if (zz > buset.size()) {
                                        r = m - 1;
                                } else if (zz == buset.size()) {
                                        pos = m;
                                        l = m + 1;
                                } else {
                                        l = m + 1;
                                }
                        }
                        if (pos == -1) {
                                c++;
                                col[i] = c;
                        } else {
                                col[i] = col[pos];
                        }
                }
                cout << "! ";
                for (int i = 1; i <= n; i++) {
                        cout << col[i] << " ";
                }
                cout << endl;
        } else if (t == 4) {
                vector<int> col(n+5, -1);
                col[1] = 1;
                for (int i = 2; i <= n; i++) {
                        set<int> buset;
                        int lst[5];
                        lst[1] = lst[2] = lst[3] = lst[4] = -1;
                        for (int j = i - 1; j >= 1; j--) {
                                buset.insert(col[j]);
                                if (lst[buset.size()] == -1) {
                                        lst[buset.size()] = j;
                                }
                        }
                        if (lst[2] == -1) {
                                col[i] = col[i-1];
                        } else {
                                int z 
                        }
                }
        }
        return 0;
}