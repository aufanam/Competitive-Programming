#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n,k,z,x,i;
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)
        {
                scanf("%lld",&x);
                if((x&k)==k)
                {
                        z=x;
                }
                else
                {
                        z=-1;
                }
                printf("%lld\n",z);
        }
}