#include <bits/stdc++.h>
#define ll                      long long
#define ld                      long double
#define itn                     int
#define ckmin(a, b)             a = min(a, b)
#define ckmax(a, b)             a = max(a, b)
#define all(x)                  (x).begin(), (x).end()
#define allr(x)                 (x).rbegin(), (x).rend()
#define mp(a, b)                make_pair(a, b)
#define N                       500005
#define xyz                     1000
#define Aufan                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
template <typename T> T modx(T a,T b) {return (a-1)%b+1;}
template <typename T> T modp(T a,T b) {return (a%b+b)%b;}
const int MOD=1e9+7;
const int mod=998244353;
bool difdigit(ll a){ll b=floor(log10(a)+1);ll arr[10];memset(arr,0,sizeof(arr));while(a>0){arr[a%10]++;a/=10;}if(count(arr,arr+10,1)==b)return true;return false;}
bool isPerfectSquare(ll x){if(x>=0){ll sr=sqrt(x);return (sr*sr==x);}return false;}
bool isPrime(ll n){if(n<=1)return false;for(ll i=2;i<=sqrt(n);i++){if(n%i==0)return false;}return true;}
bool isPal(ll x){string s="";while(x){s+=x%10;x/=10;}string t=s;reverse(all(s));return s==t;}
char letter(ll n){string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}
string balik(string s){reverse(s.begin(),s.end());return s;}
string base10_2(ll x){string bruh="";if(x==0)return "0";while(x){ll nih=x%(-2);x/=-2;if(nih<0)nih+=2,x++;bruh+=to_string(nih);}reverse(bruh.begin(),bruh.end());return bruh;}
ll xorNih(ll n){if(n%4==0)return n;if(n%4==1)return 1;if(n%4==2)return n+1;return 0;}
ll base2_10(ll x){ll output;for(ll i=0;x>0;i++){if(x%10==1)output+=pow(2,i);x/=10;}return output;}
ll digitsum(ll a){ll b=0;while(a>0){b+=a%10;a/=10;}return b;}
ll factorial(ll a){ll b=1;while(a>0){b*=a;a--;}return b;}
ll ceildiv(ll a, ll b){ll q;q=a/b+(a%b!=0);return q;}
unsigned ll fac[xyz+1];unsigned ll modin[xyz+1];
unsigned ll power(unsigned ll x,int y){unsigned ll res=1;x=x%MOD;while(y>0){if(y&1)res=(res*x)%MOD;y=y>>1;x=(x*x)%MOD;}return res;}
unsigned ll modInverse(unsigned ll n){return power(n,MOD-2);}
unsigned ll nCrModPFermat(unsigned ll n,int r){if(n<r)return 0;if(r==0)return 1;return (fac[n]*modin[r]%MOD*modin[n-r]%MOD)%MOD;}
void generatefac(){fac[0]=1;modin[0]=modInverse(1);for(int i=1;i<=xyz;i++){fac[i]=(fac[i-1]*i)%MOD;modin[i]=modInverse(fac[i]);}}

int main()
{
    Aufan
    // code
    ld n;
    cin >> n;
    if (n < 3)
    {
        cout << "-1\n";
        return 0;
    }
    vector<pair<ld, ld>> v(n);
    for (ld i = 0; i < n; i++)
    {
        ld x, y;
        cin >> x >> y;
        v[i] = mp(x, y);
    }
    ld ans = MOD;
    ld cntans = 0;
    for (ld i = 0; i < n; i++)
    {
        for (ld j = i + 1; j < n; j++)
        {
            for (ld k = j + 1; k < n; k++)
            {
                ld x1, x2, x3, y1, y2, y3;
                x1 = v[i].first;
                x2 = v[j].first;
                x3 = v[k].first;
                y1 = v[i].second;
                y2 = v[j].second;
                y3 = v[k].second;
                if (x1 == x2 && x2 == x3) continue;
                if (y1 == y2 && y2 == y3) continue;
                ld area1 = (x2-x1)*(y3-y1);
                ld area2 = (x3-x1)*(y2-y1);
                ld cur = (abs(area1-area2))/2;
                if (cur > 0)
                {
                    if (cur < ans)
                    {
                        ans = cur;
                        cntans = 1;
                    }
                    else if (cur == ans) cntans++;
                }
            }
        }
    }
    if (cntans == 1) cout << ans << '\n';
    else cout << "-1\n";
    // code
    return 0;
}