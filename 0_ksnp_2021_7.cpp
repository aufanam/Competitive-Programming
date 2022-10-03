#include <bits/stdc++.h>

using namespace std;

int main()
{
        string s = "KSNP";
        for (int i = 0; i < 5; i++) {
                string res = "";
                for (auto c : s) {
                        if (c == 'N') {
                                res = res + "KSN";
                        }
                        if (c == 'P') {
                                res = res + "KSNP";
                        }
                        if (c == 'K') {
                                res = res + "KSNK";
                        }
                        if (c == 'S') {
                                res = res + "KSNS";
                        }
                }
                s = res;
        }
        cout << s[2020] << '\n';
        return 0;
}