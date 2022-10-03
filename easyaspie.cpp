#include <bits/stdc++.h>
using namespace std;
const long long mod=10^9+7;
int main() {
        long long a,b,zx;
        scanf("%lld%lld",&a,&b);
        zx=a*b;
        zx%=mod;
        printf("%lld\n",zx);
        return 0;
}