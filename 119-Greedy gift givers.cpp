#include<bits/stdc++.h>
using namespace std;
map<string,long long>mp;
long long i,n,amnt,p,j;
string s[100],a;
int main()
{
    long long tst=1;
    while(scanf("%lld",&n)==1)
    {
        mp.clear();
        for(i=1;i<=n;i++)
        {
            cin>>s[i];
            mp[s[i]]=0;
        }
        for(i=1;i<=n;i++)
        {
            cin>>a>>amnt>>p;
            if(p!=0)
            mp[a]=mp[a]-amnt+(amnt%p);
            if(p!=0)
            {
                for(j=1;j<=p;j++)
                {
                    cin>>a;
                    mp[a]=mp[a]+(amnt/p);
                }
            }
        }
           if(tst!=1)
        {
            cout<<endl;
        }
           for(i=1;i<=n;i++)
           {
               cout<<s[i]<<" "<<mp[s[i]]<<endl;
           }

        tst++;
    }
    return 0;
}
