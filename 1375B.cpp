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
        int n, m;
        cin >> n >> m;
        bool bull = false;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int a;
                cin >> a;
                if ((i == 1) || (i == n))
                {
                    if ((j == 1) || (j == m))
                    {
                        if (a > 2) bull = true;
                    }
                    else if (a > 3) bull = true;
                }
                else if ((j == 1) || (j == m))
                {
                    if (a > 3) bull = true;
                }
                else if (a > 4) bull = true;
            }
        }
        if (bull) cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (((j == 0) || (j == m - 1)) && ((i == 0) || (i == n - 1))) cout << "2 ";
                    else if ((j == 0) || (j == m - 1)) cout << "3 ";
                    else if ((i == 0) || (i == n - 1)) cout << "3 ";
                    else cout << "4 ";
                }
                cout << '\n';
            }
        }
    }
    // code
    return 0;
}