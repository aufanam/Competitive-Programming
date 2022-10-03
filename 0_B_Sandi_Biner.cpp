#include <cstdio>
main(){long long q,k,c,i,z;scanf("%lld%lld",&q,&k);for(i=0;i<q;i++){scanf("%lld",&c);if((k&c)==k){z=c;}else{z=-1;}printf("%lld\n",z);}}