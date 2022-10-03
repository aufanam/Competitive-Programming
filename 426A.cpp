#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n,s,x,i,mx=0,z=0;
        scanf("%lld%lld",&n,&s);
        for(i=0;i<n;i++)
        {
                scanf("%lld",&x);
                mx=max(mx,x);
                z+=x;
        }
        if(z-mx<=s)
        {
                printf("YES\n");
        }
        else
        {
                printf("NO\n");
        }
        return 0;
}