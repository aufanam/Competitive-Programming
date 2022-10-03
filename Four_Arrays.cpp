#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define itn int
#define ckmin(a, b) a = min(a, b)
#define ckmax(a, b) a = max(a, b)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define mp(a, b) make_pair(a, b)
#define N 500005
#define xyz 1000
using namespace std;
const int MOD=1e9+7;
const int mod=998244353;
bool isPerfectSquare(ll x){if(x>=0){ll sr=sqrt(x);return (sr*sr==x);}return false;}
bool isPrime(ll n){if(n<=1)return false;for(ll i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}
bool isPal(ll x){string s="";while(x){s+=x%10;x/=10;}string t=s;reverse(all(s));return s==t;}
char letter(ll n){string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}
string balik(string s){reverse(s.begin(),s.end());return s;}
string base10_2(ll x){string bruh="";if(x==0)return "0";while(x){ll nih=x%(-2);x/=-2;if(nih<0)nih+=2,x++;bruh+=to_string(nih);}reverse(bruh.begin(),bruh.end());return bruh;}
pair<ll, ll> simpleFraction(ll a, ll b){ll x=gcd(a,b);a/=x;b/=x;return mp(a,b);}
ll xorNih(ll n){if(n%4==0)return n;if(n%4==1)return 1;if(n%4==2)return n+1;return 0;}
ll base2_10(ll x){ll output;for(ll i=0;x>0;i++){if(x%10==1)output+=pow(2,i);x/=10;}return output;}
ll difdigit(ll a){ll b=floor(log10(a)+1);ll arr[10];memset(arr,0,sizeof(arr));while(a>0){arr[a%10]++;a/=10;}if(count(arr,arr+10,1)==b)return 1;return 0;}
ll modnonol(ll a,ll b){if(a%b)return a%b;else return b;}
ll digitsum(ll a){ll b=0;while(a>0){b+=a%10;a/=10;}return b;}
ll factorial(ll a){ll b=1;while(a>0){b*=a;a--;}return b;}
ll ceildiv(ll a, ll b){ll q;q=a/b+(a%b!=0);return q;}
ll nCr(ll n,ll r){return factorial(n)/(factorial(r)*factorial(n-r));}
unsigned ll fac[xyz+1];unsigned ll modin[xyz+1];
unsigned ll power(unsigned ll x,int y){unsigned ll res=1;x=x%MOD;while(y>0){if(y&1)res=(res*x)%MOD;y=y>>1;x=(x*x)%MOD;}return res;}
unsigned ll modInverse(unsigned ll n){return power(n,MOD-2);}
unsigned ll nCrModPFermat(unsigned ll n,int r){if(n<r)return 0;if(r==0)return 1;return (fac[n]*modin[r]%MOD*modin[n-r]%MOD)%MOD;}
void generatefac(){fac[0]=1;modin[0]=modInverse(1);for(int i=1;i<=xyz;i++){fac[i]=(fac[i-1]*i)%MOD;modin[i]=modInverse(fac[i]);}}
// IF NEEDED
// int arr[N], arr1[N], arr2[N], arr3[N], arr4[N], arr5[N], arr6[N], arr7[N], arr8[N], arr9[N], arr10[N];
// vector<int> v(N), v1(N), v2(N), v3(N), v4(N), v5(N), v6(N), v7(N), v8(N), v9(N), v10(N);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    // code
    ll sa, sb, sc, sd, k;
    cin >> sa >> sb >> sc >> sd >> k;
    vector<ll> a(sa);
    vector<ll> b(sb);
    vector<ll> c(sc);
    vector<ll> d(sd);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    for (auto &x : c) cin >> x;
    for (auto &x : d) cin >> x;
    vector<ll> sum1(200005, 0);
    vector<ll> sum2(200005, 0);
    for (int i = 0; i < sa; i++)
    {
        for (int j = 0; j < sb; j++)
        {
            ll z = a[i] + b[j];
            sum1[z]++;
        }
    }
    for (int i = 0; i < sc; i++)
    {
        for (int j = 0; j < sd; j++)
        {
            ll z = c[i] + d[j];
            sum2[z]++;
        }
    }
    vector<pair<int, int>> real1;
    vector<pair<int, int>> real2;
    for (int i = 0; i <= 200000; i++)
    {
        if (sum1[i] > 0)
        {
            real1.push_back(mp(i, sum1[i]));
        }
        if (sum2[i] > 0)
        {
            real2.push_back(mp(i, sum2[i]));
        }
    }
    int xx = real1.size();
    int yy = real2.size();
    vector<ll> last;
    for (int i = 0; i < xx; i++)
    {
        for (int j = 0; j < yy; j++)
        {
            ll z = real1[i].first*real2[j].first;
            for (int k = 0; k < (real1[i].second*real2[j].second); k++)
            {
                last.push_back(z);
            }
        }
    }
    sort(all(last));
    cout << last[k-1] << '\n';
    // code
    return 0;
}