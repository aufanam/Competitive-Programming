#include <bits/stdc++.h> 

using namespace std;

#define int long long
#define deb(x) cout << #x << " = " << x << endl;
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mp make_pair
#define fo(i, j) for(i=0;i<j;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i++:i--)
#define MOD ((int)1e9+7)
#define imax INT_MAX
#define imin INT_MIN
#define PI 3.1415926535897932384626433832795
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
#define sortall(x) sort(all(x))

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;

template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }

void WVI(VI ar){
    int i;
    fo(i, ar.size()){
        cout << ar[i] << " ";
    }cout << endl;
}

const int mxN = 1e5+5;
const int INF = 1e9+50;
//**************************************************************
int n;
set<int> comp;
int ar[mxN];
VI v;
VI l(4,0);
VI a(4,0);
VI b(4,0);
void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ar[i];
        comp.insert(ar[i]);
    }

    if(comp.size()<3) {
        cout << n << endl;
        for(int i=0;i<n;i++) {
            cout << ar[i] << " ";
        }cout << endl;
        return ;
    }

    for(int a : comp) v.pb(a);

    for(int i=0;i<n;i++){
        int pos=lower_bound(v.begin(), v.end(), ar[i]) - v.begin();
        l[pos]++;
    }
    b[0] =l[0], b[1] = l[1], b[2] = l[2];
    if(min(l[0],l[2])*2 > (l[1]&1?l[1]-1:l[1])){
        int tmp = min(l[0],l[2]);
        l[0]-=tmp;
        l[2]-=tmp;
        l[1] += 2*tmp;
    }else{
        l[0]+=l[1]/2;
        l[2]+=l[1]/2;
        l[1]=l[1]&1?1:0;
    }
    int dif = min(b[0],l[0]) + min(b[1],l[1]) + min(b[2], l[2]);
    cout << dif << endl;
    for(int i=0;i<l[0];i++) cout << v[0] << " ";
    for(int i=0;i<l[1];i++) cout << v[1] << " ";
    for(int i=0;i<l[2];i++) cout << v[2] << " ";
}


int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int test_cases = 1;
    //cin >> test_cases;
    while(test_cases--) {
        solve();
        cout << endl;
    }

    return 0; 
}
 			  		 	  	  	  		 		 			 	 	