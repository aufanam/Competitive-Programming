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
string balik(string s){reverse(s.begin(),s.end());return s;}
string base10_2(ll x){string bruh="";if(x==0)return "0";while(x){ll nih=x%(-2);x/=-2;if(nih<0)nih+=2,x++;bruh+=to_string(nih);}reverse(bruh.begin(),bruh.end());return bruh;}
bool isPerfectSquare(ll x){if(x>=0){ll sr=sqrt(x);return (sr*sr==x);}return false;}
bool isPrime(ll n){if(n<=1)return false;for(ll i=2;i<n;i++){if(n%i==0)return false;}return true;}
ll xorNih(ll n){if(n%4==0)return n;if(n%4==1)return 1;if(n%4==2)return n+1;return 0;}
ll base2_10(ll x){ll output;for(ll i=0;x>0;i++){if(x%10==1)output+=pow(2,i);x/=10;}return output;}
ll difdigit(ll a){ll b=floor(log10(a)+1);ll arr[10];memset(arr,0,sizeof(arr));while(a>0){arr[a%10]++;a/=10;}if(count(arr,arr+10,1)==b)return 1;return 0;}
ll modnonol(ll a,ll b){if(a%b)return a%b;else return b;}
ll digitsum(ll a){ll b=0;while(a>0){b+=a%10;a/=10;}return b;}
ll factorial(ll a){ll b=1;while(a>0){b*=a;a--;}return b;}
ll ceildiv(ll a, ll b){ll q;q=a/b+(a%b!=0);return q;}
char letter(ll n){string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";return alphabet[n];}

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
        cin >> n;
        vector<ll> a;
        vector<ll> b;
        vector<pair<ll, ll>> c;
        bool bull = false;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > 0) a.push_back(x);
            else if (x < 0) b.push_back(x);
            if (x < 0) c.push_back(mp(abs(x), -1));
            else if (x > 0) c.push_back(mp(x, 1));
            if (x == 0) bull = true;
        }
        sort(allr(a));
        sort(all(b));
        sort(allr(c));
        if (a.size() + b.size() < 5) cout << "0\n";
        else
        {
            if (a.size() == 0 && !bull)
            {
                sort(allr(b));
                ll bruh = b[0]*b[1]*b[2]*b[3]*b[4];
                cout << bruh << '\n';
            }
            else
            {
                ll cur = 1;
                int pos = 1;
                for (int i = 0; i < 5; i++)
                {
                    cur *= c[i].first;
                    pos *= c[i].second;
                }
                if (pos > 0) cout << cur << '\n';
                else
                {
                    cur *= -1;
                    ll maxPos = 0, maxNeg = 0;
                    for (int i = c.size() - 1; i >= 5; i--)
                    {
                        if (c[i].second == 1) maxPos = c[i].first;
                        else maxNeg = c[i].first*-1;
                    }
                    ll minPos = 0, minNeg = 0;
                    for (int i = 0; i < 5; i++)
                    {
                        if (c[i].second == 1) minPos = c[i].first;
                        else minNeg = c[i].first*-1;
                    }
                    // cout << minNeg << ' ' << maxNeg << ' ' << minPos << ' ' << maxPos << '\n';
                    ll d, e;
                    d = e = 0;
                    if (minNeg && maxPos) d = cur/minNeg*maxPos;
                    if (minPos && maxNeg) e = cur/minPos*maxNeg;
                    if (d && e) cout << max(d, e) << '\n';
                    else if (d) cout << d << '\n';
                    else if (e) cout << e << '\n';
                    else if (bull) cout << 0 << '\n';
                    else cout << cur << '\n';
                }

            }
        }
    }
    // code
    return 0;
}