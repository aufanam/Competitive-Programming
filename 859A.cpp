#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long i,n,x,mx=-1,z=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
                scanf("%lld",&x);
                if(x>mx)
                {
                        mx=x;
                }
        }
        if(mx-25>z)
        {
                z=mx-25;
        }
        printf("%lld\n",z);
        return 0;
}