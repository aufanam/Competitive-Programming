#include <bits/stdc++.h>
using namespace std;
#define int     long long
#define ll      long long
#define ld      long double
#define ull     unsigned long long
#define pii     pair <int, int> 
#define pb      push_back
#define mp      make_pair
#define dbg     puts("dbg");
#define outp(x) cout << #x << " = " << (x) << endl
#define dah     '\n'
#define all(x)  (x).begin(), (x).end()
#define lb      lower_bound
#define ub      upper_bound
#define test    int t; cin >> t; while(t--){solve();}
#define vwu     17
#define MOD     998244353
#define dum     30102006
ull fac[vwu];
ull modin[vwu];
int ceildiv(int x,int y)                        {int z;z=x/y+(x%y!=0);return z;}
int fe(int base,int power)                      {if(power == 0){return 1;}base%=MOD;int half = fe(base, power/2)%MOD;if(power%2 == 0){return (half*half)%MOD;} else {return (base*((half*half)%MOD))%MOD;}}
int fpb(int a,int b)                            {if(b == 0){return a;}return fpb(b, a%b);}
int kpk(int a,int b)		                    {return (a*b)/fpb(a, b);}
int pang2(int power)                            {if(power==0){return 1;}return 2*pang2(power-1);}
int base2_10(string X)                          {int res=0;for(int i=0; i<X.length(); i++){if(X[i]=='1'){res+=pang2(i);}}return res;}
int toint(string T)                             {int final = 0, cur = 1;for(int i=T.length()-1; i>=0; i--){final+=((T[i]-'0')*cur);cur*=10;}return final;}
ull powi(ull x,int y)                           {ull res=1;x=x%MOD;while(y>0){if(y&1)res=(res*x)%MOD;y=y >> 1;x=(x*x)%MOD;}return res;}
ull modInv(ull n)                               {return powi(n,MOD-2);}
ull combin(ull n,int r)                         {if(n<r)return 0;if(r==0)return 1;return (fac[n]*modin[r]%MOD*modin[n-r]%MOD)%MOD;}
void generatefac()                              {fac[0]=1;modin[0]=modInv(1);for(int i=1;i<=vwu;i++){fac[i]=(fac[i-1]*i)%MOD;modin[i]=modInv(fac[i]);}}
string tostring(int x)                          {string final="";if(x==0){final+='0';}while(x>0){final+=(x%10+'0');x/=10;}reverse(all(final));return final;}
string repl(string S,int indeks,char c)         {return S.substr(0,indeks)+c+S.substr(indeks+1);}
string base10_2(int x)                          {string res="";while(x>0){if(x%2==0){res+='0';}else{res+='1';}x/=2;}reverse(all(res));return res;}
bool is_square(int x)                           {int half=sqrt(x);return (half*half==x);}

int n, a, banyak[37];

void solve(){   
    cin >> n;
    memset(banyak, 0, sizeof(banyak));
    for(int i=1; i<=n; i++){
        cin >> a;
        int len = log2(a);
        len++;
        banyak[len]++;
    }
    int ans = 0;
    for(int i=1; i<=33; i++){
        if(banyak[i] < 2) continue;
        ans += ((banyak[i]*(banyak[i]-1))/2);
    }
    cout << ans << dah;
}


int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    test
    return 0;
}