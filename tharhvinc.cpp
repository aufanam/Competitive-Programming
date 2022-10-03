#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mp make_pair
#define pdd pair<double, double>
#define pii pair<ll,ll>
#define endl '\n'
const int INF = 1e9+10;
using namespace std;

pair<char,int>  x[200005];
vector<int> ans;

bool cmp(pair<char,int> a,pair<char,int> b){
	return a.fi > b.fi;
}


signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);

	int t;cin >> t;
	while(t--){
		ans.clear();
		string s;cin >> s;
		int n = s.length();
		for(int i=0;i<s.length();i++){
			x[i+1].fi = s[i];
			x[i+1].se = i+1;
		}
	//	for(int i=1;i<=n;i++){
	//		cout << x[i] << endl;
	//	}
		int a = x[1].fi, b = x[n].fi;
		int idxb = x[n].se;
		ans.push_back(x[1].se);
		int fr = 0;
		int val = 0;
		if(a > b){
			sort(x+1,x+n+1,cmp);
			for(int i=1;i<=n;i++){
				if(x[i].fi <= a && x[i].fi >= b){
					fr++;
					if(fr == 1){
						val += abs(x[i].fi - a);
					}
					else{
						val += abs(x[i].fi - x[i-1].fi);
					}
					if(x[i].se != 1 && x[i].se != idxb){
						ans.push_back(x[i].se);
					}
				}
			}
		}
		else{
			sort(x+1,x+n+1);
			for(int i=1;i<=n;i++){
				if(x[i].fi <= b && x[i].fi >= a){
					fr++;
					if(fr == 1){
						val += abs(x[i].fi - a);
					}
					else{
						val += abs(x[i].fi - x[i-1].fi);
					}
					if(x[i].se != 1 && x[i].se != idxb){
						ans.push_back(x[i].se);
					}
				}
			}
		}
		ans.push_back(idxb);
		cout << val << " " << fr << endl;
		for(int i=0;i<ans.size();i++){
			cout << ans[i] << " ";
		}	
		cout << endl;
	}
	
}


