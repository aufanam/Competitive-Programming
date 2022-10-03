#include <bits/stdc++.h>

using namespace std;

long long n,x,y,a,b,c,d;

int main()
{
        long long i,j;
        bool ok=1;
        scanf("%lld%lld%lld",&n,&x,&y);
        if(x>0)
        {
                b=x;
                n-=x;
        }
        else
        {
                d=-x;
                n+=x;
        }
        if(y>0)
        {
                a=y;
                n-=y;
        }
        else
        {
                c=-y;
                n+=y;
        }
        if(n%2||n<0)
        {
                ok=false;
        }
        else
        {
                a+=n/2;
                c+=n/2;
        }
        if(ok)
        {
                printf("%lld %lld %lld %lld\n",a,b,c,d);
        }
        else
        {
                printf("%d\n",-1);
        }
        return 0;
}