#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long a,b,c,f,z;
        scanf("%lld%lld%lld",&a,&b,&c);
        f=sqrt(a*b*c);
        z=4*(f/a+f/b+f/c);
        printf("%lld\n",z);
        return 0;
}