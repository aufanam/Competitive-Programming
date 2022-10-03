#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
// first second push_back upper_bound lower_bound
#define setbit(n) __builtin_popcountll(n)
#define endl "\n" //delete if interactive
using namespace std;
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*
int arr[n];
int size=4*(n);
    int seg[size];
    buildTree(seg,arr,1,0,n-1);
    updateTree(seg,arr,1,0,n-1,idx, val)
    int ans=query(seg,1,0,n-1,l,r);
*/
void buildTree(ll seg[], ll arr[], ll si, ll ss, ll se) //building minimum seg tree
{
    if (ss == se)
    {
        seg[si] = arr[ss];
        return;
    }
    ll mid = (ss + se) / 2;
    buildTree(seg, arr, 2 * si, ss, mid);
    buildTree(seg, arr, 2 * si + 1, mid + 1, se);
 
    seg[si] = max(seg[2 * si] , seg[2 * si + 1]);
}
void updateTree(ll seg[] , ll arr[], ll si , ll ss , ll se , ll idx , ll val)
{
    if (ss == se)
    {
        arr[idx] = val;
        seg[si] = val;
        return;
    }
    ll mid = (ss + se) / 2;
    if (idx <= mid)
        updateTree(seg, arr, 2 * si, ss, mid, idx , val);
    else
        updateTree(seg, arr, 2 * si + 1, mid + 1, se , idx , val);
 
    seg[si] = max(seg[2 * si] , seg[2 * si + 1]);
 
}
ll query(ll seg[], ll si, ll ss , ll se, ll qs, ll qe) // obv ss<=qs<=qe<=se
{
    if (qe < ss || qs > se) //completly outside
        return 0;
    if (ss >= qs && se <= qe) //complety inside        qs   ss------se   qe
    {
        return seg[si];
    }
    ll mid = (ss + se) / 2;
    ll l = query(seg, 2 * si , ss, mid, qs, qe);
    ll r = query(seg, 2 * si + 1, mid + 1, se, qs, qe);
    return max(l , r);
}
/*
ll arr[n];
ll size=4*(n);
    ll seg[size];
    buildTree(seg,arr,1,0,n-1);
    updateTree(seg,arr,1,0,n-1,idx, val)
    ll ans=query(seg,1,0,n-1,l,r);
*/
void solve() {
 
    ll n, m;
    cin >> n >>  m ;
    ll arr[m];
    for (ll i = 0 ; i < m ; i++)
        cin >> arr[i];
    ll size = 4 * (m);
    ll seg[size];
    buildTree(seg, arr, 1, 0, n - 1);
 
    ll q ;
    cin >> q ;
    while (q--) {
        ll a, b , x, y , k ;
        cin >> a >> b >> x >> y >> k ;
        if (b > y) {
            swap(a, x);
            swap(b, y);
        }
        debug(a , b);
        b-- ,  y -- ;
        ll s = b + 1 , e = y - 1;
        ll ok = 1;
 
        ll d1 = abs(a - x) , d2 = abs(b - y);
 
        if (d1 % k or d2 % k) cout << "NO" << endl ;
        else {
            if (s > e) {
                cout << "YES" << endl;
            }
            else {
                ll mx = query(seg , 1 , 0 , m - 1 , s , e );
 
 
                if (mx == n) {
                    cout << "NO" << endl;
                }
                else if (mx < a) {
                    cout << "YES" << endl;
                }
                else {
                    ll above = mx - a ;
                    debug(above);
                    ll pre = above;
 
                    above = ((above + k - 1) / k) * k ;
 
                    if (pre == above)above += k;
 
                    ll tot =  above + a ;
 
                    if (tot > n) cout << "NO" << endl;
                    else cout << "YES" << endl;
                }
            }
        }
 
    }
 
}
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
 
    solve();
 
    return 0;
}