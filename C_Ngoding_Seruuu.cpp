#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long ck,ca,sz,mx=0,i;
        bool ok=false;
        string s,z="NO";
        while(cin>>s)
        {
                ck=ca=0;
                sz=s.size();
                if(s[sz-1]=='.')
                {
                        s.erase(sz-1);
                        sz--;
                }
                for(i=0;i<sz;i++)
                {
                        if(s[i]<='z'&&s[i]>='a')
                        {
                                ck++;        
                        }
                        if(s[i]<='9'&&s[i]>='0')
                        {
                                ca++;
                        }
                }
                if(ck>=3&&ca>=1&&sz>mx)
                {
                        ok=true;
                        mx=sz;
                        z=s;
                }
        }
        cout<<z<<'\n';
        if(ok)
        {
                cout<<mx<<'\n';
        }
        return 0;
}