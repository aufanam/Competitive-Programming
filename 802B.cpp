#include <bits/stdc++.h>

using namespace std;
long long a[400069];
bool b[400069];
set<long long> st[400069];
set<pair<long long,long long>> sp;
int main()
{
        long long n,k,i,x,z=0,zz=0;
        scanf("%lld%lld",&n,&k);
        for(i=1;i<=n;i++)
        {       
                scanf("%lld",a+i);
                st[a[i]].insert(i);
                st[i].insert(n+1);
        }
        for(i=1;i<=n;i++)
        {
                if(b[a[i]])
                {
                        sp.erase({i,a[i]});
                        sp.insert({*st[a[i]].upper_bound(i),a[i]});
                        continue;
                }
                if(z<k)
                {
                        z++;
                        b[a[i]]=1;
                        zz++;
                }
                else
                {
                        b[a[i]]=1;
                        zz++;
                        b[sp.rbegin()->second]=0;
                        sp.erase(*sp.rbegin());
                }
                sp.insert({*st[a[i]].upper_bound(i),a[i]});
        }
        printf("%lld\n",zz);
        return 0;
}