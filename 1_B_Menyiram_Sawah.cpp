#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string subsoal;
        cin >> subsoal;
        int n, m, q;
        cin >> n >> m >> q;
        vector<vector<int>> v(n+5, vector<int>(m+5, -1));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        cin >> v[i][j];
                }
        }
        vector<vector<int>> pref(n+5, vector<int>(m+5, 0));
        vector<vector<bool>> valid(n+5, vector<bool>(m+5, false));
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; k++) {
                                if (v[i][j] >= v[i+dx[k]][j+dy[k]]) cnt++;
                        }
                        if (cnt == 4) {
                                pref[i][j] = 1;
                                valid[i][j] = true;
                        }
                }
        }
        vector<vector<int>> prefatas(n+5, vector<int>(m+5, 0));
        vector<vector<bool>> validatas(n+5, vector<bool>(m+5, false));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; k++) {
                                if (k == 2) continue;
                                if (v[i][j] >= v[i+dx[k]][j+dy[k]]) cnt++;
                        }
                        if (cnt == 3) {
                                prefatas[i][j] = 1;
                                validatas[i][j] = true;
                        }
                }
        }
        vector<vector<int>> prefkiri(n+5, vector<int>(m+5, 0));
        vector<vector<bool>> validkiri(n+5, vector<bool>(m+5, false));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; k++) {
                                if (k == 3) continue;
                                if (v[i][j] >= v[i+dx[k]][j+dy[k]]) cnt++;
                        }
                        if (cnt == 3) {
                                prefkiri[i][j] = 1;
                                validkiri[i][j] = true;
                        }
                }
        }
        vector<vector<int>> prefbawah(n+5, vector<int>(m+5, 0));
        vector<vector<bool>> validbawah(n+5, vector<bool>(m+5, false));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; k++) {
                                if (k == 0) continue;
                                if (v[i][j] >= v[i+dx[k]][j+dy[k]]) cnt++;
                        }
                        if (cnt == 3) {
                                prefbawah[i][j] = 1;
                                validbawah[i][j] = true;
                        }
                }
        }
        vector<vector<int>> prefkanan(n+5, vector<int>(m+5, 0));
        vector<vector<bool>> validkanan(n+5, vector<bool>(m+5, false));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; k++) {
                                if (k == 1) continue;
                                if (v[i][j] >= v[i+dx[k]][j+dy[k]]) cnt++;
                        }
                        if (cnt == 3) {
                                prefkanan[i][j] = 1;
                                validkanan[i][j] = true;
                        }
                }
        }
        vector<vector<int>> prefatasbawah(n+5, vector<int>(m+5, 0));
        vector<vector<bool>> validatasbawah(n+5, vector<bool>(m+5, false));
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; k++) {
                                if (k == 0 || k == 2) continue;
                                if (v[i][j] >= v[i+dx[k]][j+dy[k]]) cnt++;
                        }
                        if (cnt == 2) {
                                prefatasbawah[i][j] = 1;
                                validatasbawah[i][j] = true;
                        }
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        pref[i][j] += pref[i][j-1];
                        pref[i][j] += pref[i-1][j];
                        pref[i][j] -= pref[i-1][j-1];
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        prefatas[i][j] += prefatas[i][j-1];
                        prefatas[i][j] += prefatas[i-1][j];
                        prefatas[i][j] -= prefatas[i-1][j-1];
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        prefkiri[i][j] += prefkiri[i][j-1];
                        prefkiri[i][j] += prefkiri[i-1][j];
                        prefkiri[i][j] -= prefkiri[i-1][j-1];
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        prefbawah[i][j] += prefbawah[i][j-1];
                        prefbawah[i][j] += prefbawah[i-1][j];
                        prefbawah[i][j] -= prefbawah[i-1][j-1];
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        prefkanan[i][j] += prefkanan[i][j-1];
                        prefkanan[i][j] += prefkanan[i-1][j];
                        prefkanan[i][j] -= prefkanan[i-1][j-1];
                }
        }
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                        prefatasbawah[i][j] += prefatasbawah[i][j-1];
                        prefatasbawah[i][j] += prefatasbawah[i-1][j];
                        prefatasbawah[i][j] -= prefatasbawah[i-1][j-1];
                }
        }
        while (q--) {
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                if (a != c) {
                        int res = 0;
                        res += (pref[c-1][d-1] - pref[c-1][b] - pref[a][d-1] + pref[a][b]);
                        res += (prefatas[a][d-1] - prefatas[a-1][d-1] - prefatas[a][b] + prefatas[a-1][b]);
                        res += (prefkiri[c-1][b] - prefkiri[c-1][b-1] - prefkiri[a][b] + prefkiri[a][b-1]);
                        res += (prefbawah[c][d-1] - prefbawah[c-1][d-1] - prefbawah[c][b] + prefbawah[c-1][b]);
                        res += (prefkanan[c-1][d] - prefkanan[c-1][d-1] - prefkanan[a][d] + prefkanan[a][d-1]);
                        if (res == 0) {
                                if (v[c][b] >= v[c-1][b] && v[c][b] >= v[c][b+1]) {
                                        cout << "Tidak Mungkin\n";
                                } else if (v[a][d] >= v[a+1][d] && v[a][d] >= v[a][d-1]) {
                                        cout << "Tidak Mungkin\n";
                                } else {
                                        bool b1, b2;
                                        b1 = b2 = false;
                                        if (v[a][b] > v[a+1][b] && v[a][b] > v[a][b+1]) {
                                                b1 = true;
                                        }
                                        if (v[c][d] > v[c-1][d] && v[c][d] > v[c][d-1]) {
                                                b2 = true;
                                        }
                                        if (b1 && !b2) {
                                                cout << "Kiri Atas\n";
                                        } else if (!b1 && b2) {
                                                cout << "Kanan Bawah\n";
                                        } else {
                                                cout << "Tidak Mungkin\n";
                                        }
                                }
                        } else {
                                cout << "Tidak Mungkin\n";
                        }
                } else {
                        int res = (prefatasbawah[a][d-1] - prefatasbawah[a][b] - prefatasbawah[a-1][d-1] + prefatasbawah[a-1][b]);
                        if (res == 0) {
                                bool b1, b2;
                                b1 = b2 = false;
                                if (v[a][b] > v[a][b+1]) {
                                        b1 = true;
                                }
                                if (v[c][d] > v[c][d-1]) {
                                        b2 = true;
                                }
                                if (b1 && !b2) {
                                        cout << "Kiri Atas\n";
                                } else if (!b1 && b2) {
                                        cout << "Kanan Bawah\n";
                                } else {
                                        cout << "Tidak Mungkin\n";
                                }
                        } else {
                                cout << "Tidak Mungkin\n";
                        }
                }
        }
        return 0;
}