#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

pair<int, int> zx[100069];

int main()
{
        long long t,i,j,n,k,z;
        scanf("%lld",&t);
        for(i=0;i<t;i++)
        {
                scanf("%lld%lld",&n,&k);
                for(j=0;j<n;j++)
                {
                        scanf("%lld",&zx[j].fi);
                        zx[j].se=j;
                }
                sort(zx,zx+n);
                z=1;
                for(j=1;j<n;j++)
                {
                        if(zx[j-1].se+1!=zx[j].se)
                        {
                                z++;
                        }
                }
                if(z>k)
                {
                        printf("No\n");
                }
                else
                {
                        printf("Yes\n");
                }
        }
        return 0;
}