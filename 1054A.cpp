#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long x,y,z,t1,t2,t3,a=0,b=0;
        scanf("%lld%lld%lld%lld%lld%lld",&x,&y,&z,&t1,&t2,&t3);
        a=(abs(z-x)+abs(x-y))*t2+3*t3;
        b=abs(x-y)*t1;
        if(a<=b)
        {
                printf("YES\n");
        }
        else
        {
                printf("NO\n");
        }
        return 0;
}