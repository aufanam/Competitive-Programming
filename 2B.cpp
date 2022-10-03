#include <bits/stdc++.h>
// #define int                                                             long long
#define ll                                                              long long
#define ld                                                              long double
#define ull                                                             unsigned long long
#define itn                                                             int
#define sqrt                                                            sqrtl
#define cbrt                                                            cbrtl
#define pow                                                             powl
#define floor                                                           floorl
#define ceil                                                            ceill
#define fi                                                              first
#define se                                                              second
#define ckmin(a, b)                                                     a = min(a, b)
#define ckmax(a, b)                                                     a = max(a, b)
#define all(x)                                                          (x).begin(), (x).end()
#define allr(x)                                                         (x).rbegin(), (x).rend()
#define mp(a, b)                                                        make_pair(a, b)
#define N                                                               1
#define xyz                                                             1
#define debug(x)                                                        cout << #x << " => " << x << "\n";
#define tc                                                              int t; cin >> t; while(t--) {solve();}
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
bitset<1000000> isPrime;
const int MOD=1e9+7;
const int mod=998244353;
const int INF=2e9;
// const int INFF=1e18;
ull fac[xyz+1];
ull modin[xyz+1];
template <typename T>T modx(T a,T b)                                    {return (a-1)%b+1;}
template <typename T>T modp(T a,T b)                                    {return (a%b+b)%b;}
template <typename T> void print(T v)                                   {for(auto x:v)cout<<x<<' ';cout<<'\n';}
template <typename A, typename B> void print(map<A,B> m)                {for(auto x:m)cout<<x.fi<<' '<<x.se<<'\n';}
template <typename A, typename B> void print(vector<pair<A,B>> v)       {for(auto x:v)cout<<x.fi<<' '<<x.se<<'\n';}
template <typename T> map<T,int> freq_count(vector<T> v)                {int n=v.size();map<T,int> m;for(T x:v)m[x]++;return m;}
template <typename T> vector<pair<T,int>> group_count(vector<T> v)      {int n=v.size();vector<pair<T,int>> r;if(!n)return r;int c=1;for(int i=1;i<n;i++){if(v[i]==v[i-1])c++;else{r.push_back(make_pair(v[i-1],c));c=1;}}r.push_back(make_pair(v[n-1],c));return r;}
template <typename T> vector<T> prefix_sum(vector<T> v)                 {int n=v.size();vector<T> r(n+1,0);for(int i=0;i<n;i++) {r[i+1]=r[i]+v[i];}return r;}
template <typename A, typename B> vector<A> keys(map<A,B> m)            {vector<A> v;for(auto x:m) v.push_back(x.fi);return v;}
template <typename A, typename B> vector<B> values(map<A,B> m)          {vector<B> v;for(auto x:m) v.push_back(x.se);return v;}
vector<pair<char,int>> group_count(string s)                            {return group_count(vector(all(s)));}
map<char,int> freq_count(string s)                                      {return freq_count(vector(all(s)));}
bool difdigit(int a)                                                    {int b=floor(log10(a)+1);int arr[10];memset(arr,0,sizeof(arr));while(a>0){arr[a%10]++;a/=10;}if(count(arr,arr+10,1)==b)return true;return false;}
bool isPerfectSquare(int x)                                             {if(x>=0){int sr=sqrt(x);return (sr*sr==x);}return false;}
bool isPal(int x)                                                       {string s="";while(x){s+=x%10;x/=10;}string t=s;reverse(all(s));return s==t;}
bool checkPrime(int x)                                                  {for(int i=2;i*i<=x;i++){if(x%i==0){return false;}}return true;}
char letter(int n)                                                      {string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}
char number(int n)                                                      {string bruh="0123456789"; return bruh[n];}
string balik(string s)                                                  {reverse(s.begin(),s.end());return s;}
string base10_2(int x)                                                  {if(x == 1)return "1";if(x%2)return base10_2(x/2)+"1";return base10_2(x/2)+"0";}
int xorNih(int n)                                                       {if(n%4==0)return n;if(n%4==1)return 1;if(n%4==2)return n+1;return 0;}
int base2_10(int x)                                                     {int output;for(int i=0;x>0;i++){if(x%10==1)output+=pow(2,i);x/=10;}return output;}
int digitsum(int a)                                                     {int b=0;while(a>0){b+=a%10;a/=10;}return b;}
int factorial(int a)                                                    {int b=1;while(a>0){b*=a;a--;}return b;}
int ceildiv(int a, int b)                                               {int q;q=a/b+(a%b!=0);return q;}
ull power(ull x,int y)                                                  {ull res=1;x=x%MOD;while(y>0){if(y&1)res=(res*x)%MOD;y=y>>1;x=(x*x)%MOD;}return res;}
ull modInverse(ull n)                                                   {return power(n,MOD-2);}
ull nCrModPFermat(ull n,int r)                                          {if(n<r)return 0;if(r==0)return 1;return (fac[n]*modin[r]%MOD*modin[n-r]%MOD)%MOD;}
void generatefac()                                                      {fac[0]=1;modin[0]=modInverse(1);for(int i=1;i<=xyz;i++){fac[i]=(fac[i-1]*i)%MOD;modin[i]=modInverse(fac[i]);}}
void callprime()                                                        {for(int i=2;i<=1000000;i++){if(!isPrime[i]){int j=i*i;while(j<=1000000){isPrime[j]=true;j+=i;}}}isPrime.flip();isPrime[1]=false;}

pair<int, int> calc(int x) {
        if (x == 0) return {0, 0};
        if (x == 1) return {0, 0};
        int cnt2 = 0;
        int cnt5 = 0;
        while (x%2 == 0) {
                cnt2++;
                x /= 2;
        }
        while (x%5 == 0) {
                cnt5++;
                x /= 5;
        }
        pair<int, int> p = {cnt2, cnt5};
        return p;
}
void solve() {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        int idxx, idxy;
        bool bull = false;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> v[i][j];
                        if (v[i][j] == 0) {
                                bull = true;
                                idxx = i;
                                idxy = j;
                        }
                }
        }
        vector<vector<pair<int, int>>> zz(n, vector<pair<int, int>>(n));
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        zz[i][j] = calc(v[i][j]);
                }
        }
        vector<vector<int>> dp1(n, vector<int>(n));
        vector<vector<int>> dp2(n, vector<int>(n));
        vector<vector<char>> res1(n, vector<char>(n));
        vector<vector<char>> res2(n, vector<char>(n));
        dp1[0][0] = zz[0][0].fi;
        dp2[0][0] = zz[0][0].se;
        for (int i = 1; i < n; i++) {
                dp1[i][0] = dp1[i-1][0] + zz[i][0].fi;
                dp2[i][0] = dp2[i-1][0] + zz[i][0].se;
                dp1[0][i] = dp1[0][i-1] + zz[0][i].fi;
                dp2[0][i] = dp2[0][i-1] + zz[0][i].se;
                res1[i][0] = 'D';
                res2[i][0] = 'D';
                res1[0][i] = 'R';
                res2[0][i] = 'R';
        }
        for (int i = 1; i < n; i++) {
                for (int j = 1; j < n; j++) {
                        if (dp1[i-1][j] < dp1[i][j-1]) {
                                res1[i][j] = 'D';
                                dp1[i][j] = dp1[i-1][j] + zz[i][j].fi;
                        } else {
                                res1[i][j] = 'R';
                                dp1[i][j] = dp1[i][j-1] + zz[i][j].fi;
                        }
                        if (dp2[i-1][j] < dp2[i][j-1]) {
                                res2[i][j] = 'D';
                                dp2[i][j] = dp2[i-1][j] + zz[i][j].se;
                        } else {
                                res2[i][j] = 'R';
                                dp2[i][j] = dp2[i][j-1] + zz[i][j].se;
                        }
                }
        }
        string ans = "";
        if (bull) {
                for (int i = 0; i < idxx; i++) {
                        ans += 'D';
                }
                for (int i = 0; i < n - 1; i++) {
                        ans += 'R';
                }
                for (int i = idxx; i < n - 1; i++) {
                        ans += 'D';
                }
        }
        // for (int i = 0; i < n; i++) {
        //         for (int j = 0; j < n; j++) {
        //                 cout << zz[i][j].se << ' ';
        //         }
        //         cout << '\n';
        // }
        if (dp1[n-1][n-1] > 0 && dp2[n-1][n-1] > 0) {
                if (bull) {
                        cout << 1 << '\n';
                        cout << ans << '\n';
                        return;
                }
        }
        if (dp1[n-1][n-1] < dp2[n-1][n-1]) {
                cout << dp1[n-1][n-1] << '\n';
                int x = n - 1;
                int y = n - 1;
                string zx = "";
                while (!(x == 0 && y == 0)) {
                        zx += res1[x][y];
                        if (res1[x][y] == 'R') y--;
                        else x--;
                }
                reverse(all(zx));
                cout << zx << '\n';
        } else {
                cout << dp2[n-1][n-1] << '\n';
                int x = n - 1;
                int y = n - 1;
                string zx = "";
                while (!(x == 0 && y == 0)) {
                        zx += res2[x][y];
                        if (res2[x][y] == 'R') y--;
                        else x--;
                }
                reverse(all(zx));
                cout << zx << '\n';
        }
        return;
}

int32_t main()
{
        Aufan
        solve();
        return 0;
}