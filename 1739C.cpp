#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int MOD = 998244353;
int fac[66];
int power(int x,int y)                                                  {int res=1;x=x%MOD;while(y>0){if(y&1)res=(res*x)%MOD;y=y>>1;x=(x*x)%MOD;}return res;}
int modInverse(int n)                                                   {return power(n,MOD-2);}
int nCrModPFermat(int n,int r)                                          {if(n<r)return 0;if(r==0)return 1;return (fac[n]*modInverse(fac[r])%MOD*modInverse(fac[n-r])%MOD)%MOD;}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<pair<int, int>> dp(66);
        fac[0] = 1;
        for (int i = 1; i <= 60; i++) {
                fac[i] = (fac[i-1]*i)%MOD;
        }
        dp[2] = {1, 0};
        dp[4] = {3, 2};
        dp[6] = {12, 7};
        for (int i = 8; i <= 60; i+=2) {
                dp[i].fi = (nCrModPFermat(i - 1, i/2 - 1) + dp[i-2].se)%MOD;
                dp[i].se = (nCrModPFermat(i, i/2) - dp[i].fi - 1 + MOD + MOD)%MOD;
        }
        int t;
        cin >> t;
        while (t--) {
                int x;
                cin >> x;
                cout << dp[x].fi << ' ' << dp[x].se << ' ' << 1 << '\n';
        }
        return 0;
}