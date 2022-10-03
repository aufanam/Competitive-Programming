#include <bits/stdc++.h>

using namespace std;
long long a[169];
int main()
{
        long long n,q,i,j,t,k,d,z,zz;
        scanf("%lld%lld",&n,&q);
        for(i=1;i<=q;i++)
        {
                scanf("%lld%lld%lld",&t,&k,&d);
                z=0;
                zz=0;
                for(j=1;j<=n;j++)
                {
                        if(a[j]<=t)
                        {
                                zz+=j;
                                z++;
                        }
                        if(z==k)
                        {
                                break;
                        }
                }
                if(z!=k)
                {
                        zz=-1;
                }
                else
                {
                        z=0;
                        for(j=1;j<=n;j++)
                        {
                                if(a[j]<=t)
                                {
                                        a[j]=t+d;
                                        z++;
                                }
                                if(z==k)
                                {
                                        break;
                                }
                        }
                }
                printf("%lld\n",zz);
        }
        return 0;
}