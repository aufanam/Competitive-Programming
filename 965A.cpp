#include <bits/stdc++.h>

using namespace std;

int main() {
        long long k,n,s,p,zx,fd,pm;
        scanf("%lld%lld%lld%lld",&k,&n,&s,&p);
        zx=(n-1)/s+1;
        fd=zx*k;
        pm=(fd-1)/p+1;
        printf("%lld\n", pm);
        return 0;
}