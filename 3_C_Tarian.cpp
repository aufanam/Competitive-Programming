#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long i,n,x=0,y=0,z,mxx=0,mxy=0,mnx=0,mny=0;
        string a;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
                cin>>a>>z;
                if(a=="maju")
                {
                        x+=z;
                }
                if(a=="mundur")
                {
                        x-=z;
                }
                if(a=="kanan")
                {
                        y+=z;
                }
                if(a=="kiri")
                {
                        y-=z;
                }
                mxx=max(mxx,x);
                mnx=min(mnx,x);
                mxy=max(mxy,y);
                mny=min(mny,y);
        }
        mxx-=mnx;
        mxy-=mny;
        if(mxx<mxy)swap(mxx,mxy);
        printf("%lld %lld\n",mxx,mxy);
        return 0;
}