/*

██████╗ ██╗  ██╗ █████╗ ███████╗██╗███╗   ██╗
██╔══██╗██║  ██║██╔══██╗██╔════╝██║████╗  ██║
██║  ██║███████║███████║█████╗  ██║██╔██╗ ██║
██║  ██║██╔══██║██╔══██║██╔══╝  ██║██║╚██╗██║
██████╔╝██║  ██║██║  ██║██║     ██║██║ ╚████║
╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝  ╚═══╝

*/
#include <bits/stdc++.h>
#define int long long
#define ld long double
#define pii pair<int,int>
#define mii map<int,int>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define tiii tuple<int,int,int>
#define pq priority_queue<int>
#define pqg priority_queue<int,vector<int>,greater<>>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define sqrt sqrtl
#define cbrt cbrtl
#define ceil ceill
#define floor floorl
#define pow powl
#define log logl
#define log2 log2l
#define log10 log10l
#define fi first
#define se second
#define endl '\n'
#define MOD 1000000007
#define mst(a) memset((a),0,sizeof((a)))
#define isin(a,b) ((a).find((b))!=(a).end())
#define ckmin(a,m) if((a)<(m))(m)=(a)
#define ckmax(a,m) if((a)>(m))(m)=(a)
using namespace std;
template<typename T> T cdiv(T a,T b) {return a/b+(a%b>0);}
template<typename T> T modx(T a,T b) {return (a-1)%b+1;}
template<typename T> T modp(T a,T b) {return (a%b+b)%b;}
template<typename T> void print(T v) {for(auto x:v)cout<<x<<' ';cout<<endl;}
template<typename A, typename B> void print(map<A,B> m) {for(auto x:m)cout<<x.fi<<' '<<x.se<<endl;}
template<typename A, typename B> void print(vector<pair<A,B>> v) {for(auto x:v)cout<<x.fi<<' '<<x.se<<endl;}
template<typename T> T sum(vector<T> v) {return accumulate(all(v),(T)0);}
template<typename T> map<T,int> freq_count(vector<T> v){int n=v.size();map<T,int> m;for(T x:v)m[x]++;return m;}
map<char,int> freq_count(string s){return freq_count(vector(all(s)));}
template<typename T> vector<pair<T,int>> group_count(vector<T> v){int n=v.size();vector<pair<T,int>> r;if(!n)return r;int c=1;for(int i=1;i<n;i++){if(v[i]==v[i-1])c++;else{r.push_back(make_pair(v[i-1],c));c=1;}}r.push_back(make_pair(v[n-1],c));return r;}
vector<pair<char,int>> group_count(string s){return group_count(vector(all(s)));}
template<typename T> vector<T> prefix_sum(vector<T> v) {int n=v.size();vector<T> r(n+1,0);for(int i=0;i<n;i++) {r[i+1]=r[i]+v[i];}return r;}
template<typename A, typename B> vector<A> keys(map<A,B> m) {vector<A> v;for(auto x:m) v.push_back(x.fi);return v;}
template<typename A, typename B> vector<B> values(map<A,B> m) {vector<B> v;for(auto x:m) v.push_back(x.se);return v;}

void solve() {
    int n;
    cin>>n;
    vi v(n);
    vector<pair<pii,pii>> w;
    
    for(int i = 0; i < n; i++) {
        int z; cin>>z;
        
        v[i]=z;

        int ii=i+1;

        int l,r;
        if (z==0) {
            l=ii+1;
            r=n;
        } else {
            l=ii/(z+1)+1;
            r=ii/z;
        }

        w.push_back({ {r,min(l, r)} , {i,0} });
    }
    set<int> buset;
    for (int i = 1; i <= n; i++) {
        buset.insert(i);
    }
    sort(all(w));
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        auto it = buset.lower_bound(w[i].fi.se);
        buset.erase(it);
        ans[w[i].se.fi] = *it;
    }
    print(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);
    int tt=0;
    if (!tt) cin>>tt;
    while (tt--) solve();
    return 0;
}