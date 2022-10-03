#include <bits/stdc++.h>

using namespace std;

long long a[169];

int main()
{
        long long n,k,x,i,zx=0;
        scanf("%lld%lld%lld",&n,&k,&x);
        for(i=0;i<n;i++)
        {
                scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n-k;i++)
        {
                zx+=a[i];
        }
        zx+=k*x;
        printf("%lld\n",zx);
        return 0;
}