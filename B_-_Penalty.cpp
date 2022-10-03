#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long t;
        cin >> t;
        while (t--) {
                string s;
                cin >> s;
                int ans = 10;
                int jthf = 5;
                int jths = 5;
                int cntf = 0;
                int cnts = 0;
                for (int i = 0; i < 10; i++) {
                        if (i%2 == 0 && (s[i] == '1' || s[i] == '?')) cntf++;
                        else if (i%2 && (s[i] == '1')) cnts++;
                        if (i%2) jths--;
                        else jthf--;
                        if (cntf - cnts > jths) ans = min(ans, i + 1);
                }
                jthf = 5;
                jths = 5;
                cntf = 0;
                cnts = 0;
                for (int i = 0; i < 10; i++) {
                        if (i%2 == 0 && s[i] == '1') cntf++;
                        if (i%2 && (s[i] == '1' || s[i] == '?')) cnts++;
                        if (i%2) jths--;
                        else jthf--;
                        if (cnts - cntf > jthf) ans = min(ans, i + 1);
                }
                cout << ans << '\n';
        }
        return 0;
}