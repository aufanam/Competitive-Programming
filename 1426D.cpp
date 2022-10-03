#include <bits/stdc++.h>

using namespace std;

map<long long, long long> mp;

int main()
{
        long long n,x,i,z=0,zx=0;
        mp[0]=1;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
                scanf("%lld",&x);
                zx+=x;
                if(mp[zx]==1)
                {
                        z++;
                        mp.clear();
                        mp[0]=1;
                        zx=x;
                        mp[zx]=1;
                }
                else
                {
                        mp[zx]=1;
                }
        }
        printf("%lld\n",z);
        return 0;
}