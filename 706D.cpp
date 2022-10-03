#include <bits/stdc++.h>

using namespace std;
const long long inf=(1ll<<32)-1;
long long n,x,y,l,r;
char c;
set<long long> st;
map<long long, long long> mp;
int main()
{
        long long i,j;
        st.insert(0);
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
                scanf(" %c%lld",&c,&x);
                if(c=='+')
                {
                        mp[x]++;
                        if(mp[x]==1)
                        {
                                st.insert(x);
                        }
                }
                else if(c=='-')
                {
                        mp[x]--;
                        if(mp[x]==0)
                        {
                                st.erase(x);
                        }
                }
                else
                {
                        y=~x;
                        l=0;
                        r=inf;
                        for(j=31;j>=0;j--)
                        {
                                if(y&(1ll<<j))
                                {
                                        if(st.lower_bound(l+(1ll<<j))!=st.end()&&*st.lower_bound(l+(1ll<<j))<=r)
                                        {
                                                l+=(1ll<<j);
                                        }
                                        else
                                        {
                                                r-=(1ll<<j);
                                        }
                                }
                                else
                                {
                                        if(st.lower_bound(l)!=st.end()&&*st.lower_bound(l)<l+(1ll<<j))
                                        {
                                                r-=(1ll<<j);
                                        }
                                        else
                                        {
                                                l+=(1ll<<j);
                                        }
                                }
                        }
                        printf("%lld\n",(l^x));
                }
        }
}