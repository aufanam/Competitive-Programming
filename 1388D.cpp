#include <bits/stdc++.h>

using namespace std;

long long a[200069],b[200069],c[200069];
queue<long long> q,z;
stack<long long> s;
int main()
{
        long long n,i,j,zz=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
                scanf("%lld",a+i);
        }
        for(i=1;i<=n;i++)
        {
                scanf("%lld",b+i);
                if(b[i]!=-1)
                {       
                        c[b[i]]++;
                }
        }
        for(i=1;i<=n;i++)
        {
                if(c[i]==0)
                {
                        q.push(i);
                }
        }
        for(;!q.empty();q.pop())
        {
                j=q.front();
                if(a[j]>=0)
                {
                        zz+=a[j];
                        z.push(j);
                        if(b[j]!=-1)
                        {
                                a[b[j]]+=a[j];
                        }
                }
                else
                {
                        s.push(j);
                }
                if(b[j]!=-1)
                {
                        c[b[j]]--;
                        if(c[b[j]]==0)
                        {
                                q.push(b[j]);
                        }
                }
        }
        for(;!s.empty();s.pop())
        {
                j=s.top();
                zz+=a[j];
                z.push(j);
        }
        printf("%lld\n",zz);
        for(;!z.empty();z.pop())
        {       
                j=z.front();
                printf("%lld ",j);
        }
        printf("\n");
        return 0;
}