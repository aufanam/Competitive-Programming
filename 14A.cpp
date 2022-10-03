#include <bits/stdc++.h>

using namespace std;

char c[55][55];

int main()
{
        long long n,m,i,j,ax=55,ay=55,bx=0,by=0;
        scanf("%lld%lld",&n,&m);
        for(i=1;i<=n;i++)
        {
                scanf("%c",&c[0][0]);
                for(j=1;j<=m;j++)
                {
                        scanf("%c",&c[i][j]);
                        if(c[i][j]=='*')
                        {
                                ax=min(ax,i);
                                bx=max(bx,i);
                                ay=min(ay,j);
                                by=max(by,j);
                        }
                }
        }
        for(i=ax;i<=bx;i++)
        {
                for(j=ay;j<=by;j++)
                {
                        printf("%c",c[i][j]);
                }
                printf("\n");
        }
        return 0;
}