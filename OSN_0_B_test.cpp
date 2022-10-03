#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n,i,x,cur=1;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
                scanf("%lld",&x);
                if(x==cur)
                {
                        printf("BENAR\n");
                        fflush(stdout);
                        cur++;
                }
                else
                {
                        printf("SALAH\n");
                        fflush(stdout);
                        cur=1;
                }
        }
}