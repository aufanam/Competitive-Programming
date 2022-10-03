#include <bits/stdc++.h>
long long a[69][69];

using namespace std;

int32_t main()
{
        long long n,i,j,ii,jj,z=1,b;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        scanf("%lld",&a[i][j]);
                }
        }
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        b=0;
                        for(ii=1;ii<=n;ii++)
                        {
                                for(jj=1;jj<=n;jj++)
                                {
                                        if(a[i][ii]+a[jj][j]==a[i][j]&&a[i][j]!=1)
                                        {
                                                b=1;
                                        }
                                }
                        }
                        if(b==0&&a[i][j]!=1)
                        {
                                z=0;
                        }
                }
        }
        if(z==1)
        {
                printf("Yes\n");
        }
        else
        {
                printf("No\n");
        }
        return 0;
}