#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n,m,z;
        scanf("%lld%lld",&n,&m);
        z=(n-(n/m))+1;
        printf("%lld",z);
        return 0;
}