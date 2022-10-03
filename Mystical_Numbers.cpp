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
        int n;
        cin >> n;
        int ans1[n+1], ans2[n+1], ans3[n+1], ans4[n+1], ans5[n+1], ans6[n+1], ans7[n+1], ans8[n+1], ans9[n+1], ans10[n+1], ans11[n+1], ans12[n+1], ans13[n+1], ans14[n+1], ans15[n+1], ans16[n+1], ans17[n+1], ans18[n+1], ans19[n+1], ans20[n+1], ans21[n+1], ans22[n+1], ans23[n+1], ans24[n+1], ans25[n+1], ans26[n+1], ans27[n+1], ans28[n+1], ans29[n+1], ans30[n+1], ans31[n+1], ans32[n+1];
        ans1[0]=ans2[0]=ans3[0]=ans4[0]=ans5[0]=ans6[0]=ans7[0]=ans8[0]=ans9[0]=ans10[0]=ans11[0]=ans12[0]=ans13[0]=ans14[0]=ans15[0]=ans16[0]=ans17[0]=ans18[0]=ans19[0]=ans20[0]=ans21[0]=ans22[0]=ans23[0]=ans24[0]=ans25[0]=ans26[0]=ans27[0]=ans28[0]=ans29[0]=ans30[0]=ans31[0]=ans32[0]=0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            int x = floor(log2(a))+1;
            ans1[i] = ans1[i-1] + 1;
            ans2[i] = ans2[i-1] + 1;
            ans3[i] = ans3[i-1] + 1;
            ans4[i] = ans4[i-1] + 1;
            ans5[i] = ans5[i-1] + 1;
            ans6[i] = ans6[i-1] + 1;
            ans7[i] = ans7[i-1] + 1;
            ans8[i] = ans8[i-1] + 1;
            ans9[i] = ans9[i-1] + 1;
            ans10[i] = ans10[i-1] + 1;
            ans11[i] = ans11[i-1] + 1;
            ans12[i] = ans12[i-1] + 1;
            ans13[i] = ans13[i-1] + 1;
            ans14[i] = ans14[i-1] + 1;
            ans15[i] = ans15[i-1] + 1;
            ans16[i] = ans16[i-1] + 1;
            ans17[i] = ans17[i-1] + 1;
            ans18[i] = ans18[i-1] + 1;
            ans19[i] = ans19[i-1] + 1;
            ans20[i] = ans20[i-1] + 1;
            ans21[i] = ans21[i-1] + 1;
            ans22[i] = ans22[i-1] + 1;
            ans23[i] = ans23[i-1] + 1;
            ans24[i] = ans24[i-1] + 1;
            ans25[i] = ans25[i-1] + 1;
            ans26[i] = ans26[i-1] + 1;
            ans27[i] = ans27[i-1] + 1;
            ans28[i] = ans28[i-1] + 1;
            ans29[i] = ans29[i-1] + 1;
            ans30[i] = ans30[i-1] + 1;
            ans31[i] = ans31[i-1] + 1;
            ans32[i] = ans32[i-1] + 1;
            if (x == 1) ans1[i]--;
            else if (x == 2) ans2[i]--;
            else if (x == 3) ans3[i]--;
            else if (x == 4) ans4[i]--;
            else if (x == 5) ans5[i]--;
            else if (x == 6) ans6[i]--;
            else if (x == 7) ans7[i]--;
            else if (x == 8) ans8[i]--;
            else if (x == 9) ans9[i]--;
            else if (x == 10) ans10[i]--;
            else if (x == 11) ans11[i]--;
            else if (x == 12) ans12[i]--;
            else if (x == 13) ans13[i]--;
            else if (x == 14) ans14[i]--;
            else if (x == 15) ans15[i]--;
            else if (x == 16) ans16[i]--;
            else if (x == 17) ans17[i]--;
            else if (x == 18) ans18[i]--;
            else if (x == 19) ans19[i]--;
            else if (x == 20) ans20[i]--;
            else if (x == 21) ans21[i]--;
            else if (x == 22) ans22[i]--;
            else if (x == 23) ans23[i]--;
            else if (x == 24) ans24[i]--;
            else if (x == 25) ans25[i]--;
            else if (x == 26) ans26[i]--;
            else if (x == 27) ans27[i]--;
            else if (x == 28) ans28[i]--;
            else if (x == 29) ans29[i]--;
            else if (x == 30) ans30[i]--;
            else if (x == 31) ans31[i]--;
            else ans32[i]--;
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, r, x;
            cin >> l >> r >> x;
            l--;
            int y = floor(log2(x)) + 1;
            int ans;
            if (y == 1) ans = ans1[r] - ans1[l];
            else if (y == 2) ans = ans2[r] - ans2[l];
            else if (y == 3) ans = ans3[r] - ans3[l];
            else if (y == 4) ans = ans4[r] - ans4[l];
            else if (y == 5) ans = ans5[r] - ans5[l];
            else if (y == 6) ans = ans6[r] - ans6[l];
            else if (y == 7) ans = ans7[r] - ans7[l];
            else if (y == 8) ans = ans8[r] - ans8[l];
            else if (y == 9) ans = ans9[r] - ans9[l];
            else if (y == 10) ans = ans10[r] - ans10[l];
            else if (y == 11) ans = ans11[r] - ans11[l];
            else if (y == 12) ans = ans12[r] - ans12[l];
            else if (y == 13) ans = ans13[r] - ans13[l];
            else if (y == 14) ans = ans14[r] - ans14[l];
            else if (y == 15) ans = ans15[r] - ans15[l];
            else if (y == 16) ans = ans16[r] - ans16[l];
            else if (y == 17) ans = ans17[r] - ans17[l];
            else if (y == 18) ans = ans18[r] - ans18[l];
            else if (y == 19) ans = ans19[r] - ans19[l];
            else if (y == 20) ans = ans20[r] - ans20[l];
            else if (y == 21) ans = ans21[r] - ans21[l];
            else if (y == 22) ans = ans22[r] - ans22[l];
            else if (y == 23) ans = ans23[r] - ans23[l];
            else if (y == 24) ans = ans24[r] - ans24[l];
            else if (y == 25) ans = ans25[r] - ans25[l];
            else if (y == 26) ans = ans26[r] - ans26[l];
            else if (y == 27) ans = ans27[r] - ans27[l];
            else if (y == 28) ans = ans28[r] - ans28[l];
            else if (y == 29) ans = ans29[r] - ans29[l];
            else if (y == 30) ans = ans30[r] - ans30[l];
            else if (y == 31) ans = ans31[r] - ans31[l];
            else ans = ans32[r] - ans32[l];
            cout << ans << '\n';
        }
    }
    // code
    return 0;
}