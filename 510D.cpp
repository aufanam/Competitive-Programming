#include <bits/stdc++.h>
#define ll                                              long long
#define int                                             long long
#define ld                                              long double
#define ull                                             unsigned long long
#define itn                                             int
#define sqrt                                            sqrtl
#define cbrt                                            cbrtl
#define pow                                             powl
#define floor                                           floorl
#define ceil                                            ceill
#define fi                                              first
#define se                                              second
#define ckmin(a, b)                                     a = min(a, b)
#define ckmax(a, b)                                     a = max(a, b)
#define all(x)                                          (x).begin(), (x).end()
#define allr(x)                                         (x).rbegin(), (x).rend()
#define mp(a, b)                                        make_pair(a, b)
#define N                                               500005
#define xyz                                             1000
#define tc                                              int t; cin >> t; while(t--) {solve();}
#define Aufan                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
bitset<1000000> isPrime;
const int MOD=1e9+7;
const int mod=998244353;
const long double PI = 3.141592653589793;
ull fac[xyz+1];
ull modin[xyz+1];
template<typename T>T modx(T a,T b)                     {return (a-1)%b+1;}
template<typename T>T modp(T a,T b)                     {return (a%b+b)%b;}
bool difdigit(ll a)                                     {ll b=floor(log10(a)+1);ll arr[10];memset(arr,0,sizeof(arr));while(a>0){arr[a%10]++;a/=10;}if(count(arr,arr+10,1)==b)return true;return false;}
bool isPerfectSquare(ll x)                              {if(x>=0){ll sr=sqrt(x);return (sr*sr==x);}return false;}
bool isPal(ll x)                                        {string s="";while(x){s+=x%10;x/=10;}string t=s;reverse(all(s));return s==t;}
char letter(ll n)                                       {string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}
string balik(string s)                                  {reverse(s.begin(),s.end());return s;}
string base10_2(ll x)                                   {string bruh="";if(x==0)return "0";while(x){ll nih=x%(-2);x/=-2;if(nih<0)nih+=2,x++;bruh+=to_string(nih);}reverse(bruh.begin(),bruh.end());return bruh;}
ll xorNih(ll n)                                         {if(n%4==0)return n;if(n%4==1)return 1;if(n%4==2)return n+1;return 0;}
ll base2_10(ll x)                                       {ll output;for(ll i=0;x>0;i++){if(x%10==1)output+=pow(2,i);x/=10;}return output;}
ll digitsum(ll a)                                       {ll b=0;while(a>0){b+=a%10;a/=10;}return b;}
ll factorial(ll a)                                      {ll b=1;while(a>0){b*=a;a--;}return b;}
ll ceildiv(ll a, ll b)                                  {ll q;q=a/b+(a%b!=0);return q;}
ull power(ull x,int y)                                  {ull res=1;x=x%MOD;while(y>0){if(y&1)res=(res*x)%MOD;y=y>>1;x=(x*x)%MOD;}return res;}
ull modInverse(ull n)                                   {return power(n,MOD-2);}
ull nCrModPFermat(ull n,int r)                          {if(n<r)return 0;if(r==0)return 1;return (fac[n]*modin[r]%MOD*modin[n-r]%MOD)%MOD;}
void generatefac()                                      {fac[0]=1;modin[0]=modInverse(1);for(int i=1;i<=xyz;i++){fac[i]=(fac[i-1]*i)%MOD;modin[i]=modInverse(fac[i]);}}
void callprime()                                        {for(ll i=2;i<=1000000;i++){if(!isPrime[i]){ll j=i*i;while(j<=1000000){isPrime[j]=true;j+=i;}}}isPrime.flip();isPrime[1]=false;}
int x[305];
int cost[305];
int ans = 1000000000;
int m[305];
int DP[305][1<<9];
int dp(int cur, int mask) {
        if (cur == n + 1) {
                if (mask == (1 << n) - 1) {
                        return 0;
                }
                return 1000000000;
        }
        int ret = DP[cur][mask];
        if (ret != -1) return ret;
        ret = 1000000000;
        ret = min({ret, dp(cur + 1, mask), dp(cur + 1, mask | m[cur]) + cost[cur]});
        return ret;
}
void solve() {
        
        return;
}

int32_t main()
{
        Aufan
        solve();
        return 0;
}