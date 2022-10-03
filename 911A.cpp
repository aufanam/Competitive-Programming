#include <bits/stdc++.h>

using namespace std;

long long a[100069],b[100069];

int32_t main()
{
        long long n,i,mn=2e9,c=0,ans=2e9;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
                scanf("%lld",a+i);
                mn=min(mn,a[i]);
        }
        for(i=1;i<=n;i++)
        {
                if(a[i]==mn)
                {
                        b[++c]=i;
                }
        }
        for(i=1;i<c;i++)
        {
                ans=min(ans,b[i+1]-b[i]);
        }
        printf("%lld\n",ans);
        return 0;
}