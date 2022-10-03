#include <bits/stdc++.h>
#define ll long long
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
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        int xa, ya, xb, yb;
        bool bull = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '*')
                {
                    if (!bull) xa = i, ya = j, bull = true;
                    else xb = i, yb = j;
                }
            }
        }
        if (xa == xb)
        {
            int k = 0;
            if (xa == 0) k = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == xa && j == ya) cout << '*';
                    else if (i == xb && j == yb) cout << '*';
                    else if (i == k && j == ya) cout << '*';
                    else if (i == k && j == yb) cout << '*';
                    else cout << '.';
                }
                cout << '\n';
            }
        }
        else if (ya == yb)
        {
            int m = 0;
            if (ya == 0) m = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == xa && j == ya) cout << '*';
                    else if (i == xb && j == yb) cout << '*';
                    else if (i == xa && j == m) cout << '*';
                    else if (i == xb && j == m) cout << '*';
                    else cout << '.';
                }
                cout << '\n';
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == xa && j == ya) cout << '*';
                    else if (i == xb && j == yb) cout << '*';
                    else if (i == xa && j == yb) cout << '*';
                    else if (i == xb && j == ya) cout << '*';
                    else cout << '.';
                }
                cout << '\n';
            }
        }
    }
    // code
    return 0;
}