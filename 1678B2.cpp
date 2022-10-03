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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        vector<ll> a;
        vector<ll> v;
        vector<ll> g;
        char cur = s[0];
        ll cnt = 1;
        ll j = 0;
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == cur) cnt++;
            else
            {
                if (cnt%2)
                {
                    g.push_back(j);
                }
                v.push_back(j);
                a.push_back(cnt);
                cnt = 1;
                j++;
            }
            cur = s[i];
        }
        if (cnt%2) g.push_back(j);
        v.push_back(j);
        a.push_back(cnt);
        ll y = g.size();
        ll ans = 0;
        for (ll i = 0; i < y; i+=2)
        {
            ans += (g[i+1] - g[i]);
        }
        cout << ans << ' ';
        ll x = a.size();
        if (ans == 0)
        {
            cout << x << '\n';
            continue;
        }
        vector<pair<ll, ll>> fir;
        vector<pair<ll, ll>> sec;
        ll woii = a[0];
        for (ll i = 0; i < x - 1; i+=2)
        {
            if (i == 0) fir.push_back(mp(a[0], 200005));
            else fir.push_back(mp(a[i], i));
            sec.push_back(mp(a[i+1], i+1));
        }
        if (x%2) fir.push_back(mp(a[x - 1], x - 1));
        ll xx = fir.size();
        ll yy = sec.size();
        sort(all(fir));
        sort(all(sec));
        ll sumFir = 0;
        ll sumSec = 0;
        ll cnt1 = 0;
        ll ans1 = 0;
        bool bull = false;
        while (sumFir <= ans && cnt1 < xx)
        {
            sumFir += fir[cnt1].first;
            if (fir[cnt1].second == (x - 1)) ans1--, bull = true;
            if (fir[cnt1].second == 200005) ans1--, bull = true;
            ans1+=2;
            cnt1++;
        }
        if (sumFir > ans && ((fir[cnt1-1].second == 200005) || (fir[cnt1-1].second == (x-1)))) ans1++;
        if (sumFir > ans) ans1-=2;
        ll sumAneh = sumFir;
        ll ans3 = ans1;
        if (sumFir > ans)
        {
            sumAneh -= (fir[cnt1-1].first);
            sumAneh -= woii;
        }
        ll cnt2 = 0;
        ll ans2 = 0;
        while (sumSec <= ans && cnt2 < yy)
        {
            sumSec += sec[cnt2].first;
            if (sec[cnt2].second == (x - 1)) ans2--;
            ans2+=2;
            cnt2++;
        }
        if (sumSec > ans && ((sec[cnt2-1].second == (x-1)))) ans2++;
        if (sumSec > ans) ans2-=2;
        cout << x - max(ans1, ans2) << '\n';
        // something's wrong?
    }
    // code
    return 0;
}