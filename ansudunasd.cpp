#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mp make_pair
#define pdd pair<double, double>
#define pii pair<int,int>
const int INF = 1e9+10;
const int MOD = 1e9+7;
using namespace std;

// -----------------------------------------------------------------------------------------------
int freq[105];

signed main(){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	
	string subsoal;
	cin >> subsoal;
	int n;
	cin >> n;
	int a,b;
	for(int i=1;i<=n*(n-1)/2;i++){
		cin >> a >> b;
		if(i<= n-1){
			cout << "PASS" << endl;
			string ans;
			cin >> ans;
			if(ans == "SERI"){
				freq[b] = 1;
			} else {
				string dummy;
				cin >> dummy;
				if (stoi(ans) == 1) {
					freq[b] = 0;
				} else {
					freq[b] = 2;
				}
			}
		}
		else{
			if(freq[a] == freq[b]){
				cout << "SERI" << endl;
			}
			else if((freq[a] == 0 && freq[b] == 2) || (freq[a] == 1 && freq[b] == 0) || (freq[a] == 2 && freq[b] == 1)){
				cout << a << " MENANG" << endl;
			}
			else{
				cout << b << " MENANG" << endl;
			}
		}
	}
}

