#include <bits/stdc++.h>

using namespace std;

long long n,m,x;
long long zx[169];

int main()
{
        long long i,j;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
                scanf("%lld",&m);
                for(j=1;j<=m;j++)
                {
                        scanf("%lld",&x);
                        zx[x]++;
                }
        }
        for(i=1;i<=100;i++)
        {
                if(zx[i]==n)
                {
                        printf("%lld ",i);
                }
        }
        printf("\n");
        return 0;
}