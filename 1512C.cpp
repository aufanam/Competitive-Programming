#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define itn int
#define ckmin(a, b) a = min(a, b)
#define ckmax(a, b) a = max(a, b)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define mp(a, b) make_pair(a, b)
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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        bool bull = false;
        int woi = count(all(s), '?');
        if (woi == 0 && (s != balik(s))) bull = true;
        int fA = a;
        int fB = b;
        int n = a + b;
        if (n%2 == 0)
        {
            if (a%2) bull = true;
        }
        int wait = 0;
        for (int i = 0; i < n/2; i++)
        {
            char ca, cb;
            ca = s[i];
            cb = s[n-i-1];
            if (ca == '0') a--;
            if (ca == '1') b--;
            if (cb == '0') a--;
            if (cb == '1') b--;
            if (ca == '?')
            {
                if (cb == '0') ca = '0', a--;
                else if (cb == '1') ca = '1', b--;
                else wait++;
            }
            if (cb == '?')
            {
                if (ca == '0') cb = '0', a--;
                else if (ca == '1') cb = '1', b--;
                else wait++;
            }
            s[i] = ca;
            s[n-i-1] = cb;
        }
        if (a%2 && s[n/2] == '?') s[n/2] = '0', a--;
        else if (b%2 && s[n/2] == '?') s[n/2] = '1', b--;
        for (int i = 0; i < n/2; i++)
        {
            char ca, cb;
            ca = s[i];
            cb = s[n-i-1];
            if (ca == '?')
            {
                if (a >= 2) ca = '0', cb = '0', a-=2;
                else ca = '1', cb = '1', b-=2;
            }
            s[i] = ca;
            s[n-i-1] = cb;
        }
        int x = count(all(s), '0');
        int y = count(all(s), '1');
        if (s != balik(s)) bull = true;
        if (x != fA) bull = true;
        if (y != fB) bull = true;
        if (!bull) cout << s << '\n';
        else cout << "-1\n";  
    }
    // code
    return 0;
}