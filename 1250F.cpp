#include <bits/stdc++.h>
using namespace std;
int main() 
{
        long long n,i,mx,ans;
        scanf("%lld",&n);
        for(i=1;i*i<=n;i++)
        {
                if(n%i==0)
                {
                        mx=i;
                }
        }
        ans=2*mx+2*n/mx;
        printf("%lld\n",ans);
        return 0;
}