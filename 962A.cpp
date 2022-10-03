#include <bits/stdc++.h>

using namespace std;

long long n,zz[200005];

int main() {
        long long i,zx,bs=0,w=0;
        scanf("%d",&n);
        for (i=1;i<=n;i++) 
        {
                scanf("%d",zz+i);
                bs+=zz[i];
        }
        zx=(bs+1)/2;
        for (i=1;i<=n;i++)
        {
                w+=zz[i];
                if(w>=zx)
                {
                        printf("%d\n",i);
                        return 0;
                }
        }
        return 0;
}