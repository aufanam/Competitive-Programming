#include <bits/stdc++.h>
#define int                                                             long long
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
#define N                                                               500005
#define xyz                                                             1000
#define tc                                                              int t; cin >> t; while(t--) {solve();}
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
bitset<1000000> isPrime;
const int MOD=1e9+7;
const int mod=998244353;
const int INF=2e9;
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
char letter(int n)                                                      {string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}
char number(int n)                                                      {string bruh="0123456789"; return bruh[n];}
string balik(string s)                                                  {reverse(s.begin(),s.end());return s;}
string base10_2(int x)                                                  {string bruh="";if(x==0)return "0";while(x){int nih=x%(-2);x/=-2;if(nih<0)nih+=2,x++;bruh+=to_string(nih);}reverse(all(bruh));return bruh;}
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
map<pair<int, int>, bool> n2;
map<tuple<int, int, int>, bool> n3;
map<tuple<int, int, int, int>, bool> n4;
map<tuple<int, int, int, int, int>, bool> n5;
void solve() {
        int n;
        cin >> n;
        if (n == 2) {
                int a, b;
                cin >> a >> b;
                if (n2[{a, b}]) cout << "YES\n";
                else cout << "NO\n";
        }
        if (n == 3) {
                int a, b, c;
                cin >> a >> b >> c;
                if (n3[{a, b, c}]) cout << "YES\n";
                else cout << "NO\n";
        }
        if (n == 4) {
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                if (n4[{a, b, c, d}]) cout << "YES\n";
                else cout << "NO\n";
        }
        if (n == 5) {
                int a, b, c, d, e;
                cin >> a >> b >> c >> d >> e;
                if (n5[{a, b, c, d, e}]) cout << "YES\n";
                else cout << "NO\n";
        }
        return;
}

int32_t main()
{
        Aufan
        int arr[5];
        memset(arr, 0, sizeof(arr));
        for (int i1 = 0; i1 < 3; i1++) {
                if (i1 == 0) arr[0] += 3;
                if (i1 == 1) arr[0]++, arr[1]++;
                if (i1 == 2) arr[1] += 3;
                n2[{arr[0], arr[1]}] = true;
                for (int i2 = 0; i2 < 3; i2++) {
                        if (i2 == 0) arr[0] += 3;
                        if (i2 == 1) arr[0]++, arr[2]++;
                        if (i2 == 2) arr[2] += 3;
                        for (int i3 = 0; i3 < 3; i3++) {
                                if (i3 == 0) arr[1] += 3;
                                if (i3 == 1) arr[1]++, arr[2]++;
                                if (i3 == 2) arr[2] += 3;
                                n3[{arr[0], arr[1], arr[2]}] = true;
                                for (int i4 = 0; i4 < 3; i4++) {
                                        if (i4 == 0) arr[0] += 3;
                                        if (i4 == 1) arr[0]++, arr[3]++;
                                        if (i4 == 2) arr[3] += 3;
                                        for (int i5 = 0; i5 < 3; i5++) {
                                                if (i5 == 0) arr[1] += 3;
                                                if (i5 == 1) arr[1]++, arr[3]++;
                                                if (i5 == 2) arr[3] += 3;
                                                for (int i6 = 0; i6 < 3; i6++) {
                                                        if (i6 == 0) arr[2] += 3;
                                                        if (i6 == 1) arr[2]++, arr[3]++;
                                                        if (i6 == 2) arr[3] += 3;
                                                        n4[{arr[0], arr[1], arr[2], arr[3]}] = true;
                                                        for (int i7 = 0; i7 < 3; i7++) {
                                                                if (i7 == 0) arr[0] += 3;
                                                                if (i7 == 1) arr[0]++, arr[4]++;
                                                                if (i7 == 2) arr[4] += 3;
                                                                for (int i8 = 0; i8 < 3; i8++) {
                                                                        if (i8 == 0) arr[1] += 3;
                                                                        if (i8 == 1) arr[1]++, arr[4]++;
                                                                        if (i8 == 2) arr[4] += 3;
                                                                        for (int i9 = 0; i9 < 3; i9++) {
                                                                                if (i9 == 0) arr[2] += 3;
                                                                                if (i9 == 1) arr[2]++, arr[4]++;
                                                                                if (i9 == 2) arr[4] += 3;
                                                                                for (int i10 = 0; i10 < 3; i10++) {
                                                                                        if (i10 == 0) arr[3] += 3;
                                                                                        if (i10 == 1) arr[3]++, arr[4]++;
                                                                                        if (i10 == 4) arr[4] += 3;
                                                                                        n5[{arr[0], arr[1], arr[2], arr[3], arr[4]}] = true;
                                                                                        if (i10 == 0) arr[3] -= 3;
                                                                                        if (i10 == 1) arr[3]--, arr[4]--;
                                                                                        if (i10 == 4) arr[4] -= 3;
                                                                                }
                                                                                if (i9 == 0) arr[2] -= 3;
                                                                                if (i9 == 1) arr[2]--, arr[4]--;
                                                                                if (i9 == 2) arr[4] -= 3;
                                                                        }
                                                                        if (i8 == 0) arr[1] -= 3;
                                                                        if (i8 == 1) arr[1]--, arr[4]--;
                                                                        if (i8 == 2) arr[4] -= 3;
                                                                }
                                                                if (i7 == 0) arr[0] -= 3;
                                                                if (i7 == 1) arr[0]--, arr[4]--;
                                                                if (i7 == 2) arr[4] -= 3;
                                                        }
                                                        if (i6 == 0) arr[2] -= 3;
                                                        if (i6 == 1) arr[2]--, arr[3]--;
                                                        if (i6 == 2) arr[3] -= 3;
                                                }
                                                if (i5 == 0) arr[1] -= 3;
                                                if (i5 == 1) arr[1]--, arr[3]--;
                                                if (i5 == 2) arr[3] -= 3;
                                        }
                                        if (i4 == 0) arr[0] -= 3;
                                        if (i4 == 1) arr[0]--, arr[3]--;
                                        if (i4 == 2) arr[3] -= 3;
                                }
                                if (i3 == 0) arr[1] -= 3;
                                if (i3 == 1) arr[1]--, arr[2]--;
                                if (i3 == 2) arr[2] -= 3;
                        }
                        if (i2 == 0) arr[0] -= 3;
                        if (i2 == 1) arr[0]--, arr[2]--;
                        if (i2 == 2) arr[2] -= 3;
                }
                if (i1 == 0) arr[0] -= 3;
                if (i1 == 1) arr[0]--, arr[1]--;
                if (i1 == 2) arr[1] -= 3;
        }
        tc
        return 0;
}