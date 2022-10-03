#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long p,q,r,s,t,z,a,b,c,d,e;
        scanf("%lld%lld%lld%lld%lld",&p,&q,&r,&s,&t);
        z=sqrt(p*q*r*s*t);
        a=z/(q*s);
        b=z/(r*t);
        c=z/(s*p);
        d=z/(t*q);
        e=z/(p*r);
        printf("%lld %lld %lld %lld %lld\n",a,b,c,d,e);
        return 0;
}