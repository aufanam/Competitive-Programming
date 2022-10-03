#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long a,b,z;
        scanf("%lld%lld",&a,&b);
        if(a%11==0)
        {
                z=(a/11)*b;
        }
        else
        {
                z=(b/11)*a;
        }
        printf("%lld\n",z);
        return 0;
}