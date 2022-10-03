#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n;
        cin >> n;
        if (n == 0) {
                cout << "O-|-OOOO" << '\n';
                return 0;
        }
        while (n > 0) {
                int x = n%10;
                string s;
                if (x >= 5) s = "-O", x -= 5;
                else s = "O-";
                s = s + '|';
                int cnt = 4;
                while (x--) s.push_back('O'), cnt--;
                s.push_back('-');
                while (cnt--) s.push_back('O');
                cout << s << '\n';
                n /= 10;
        }
        return 0;
}