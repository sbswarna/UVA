#include<bits/stdc++.h>
using namespace std;
long long n,i,j,ans,t,cap,dp[1002][33],w[1003],p[1002],f[102],g;
long long knap(long long j,long long total,long long cap)
{
    if(j==n)
        return 0;
    if(dp[j][total]==-1)
    {
        if(total+w[j]<=cap)
        {
            if(dp[j][total]==-1)
            dp[j][total]=max(p[j]+knap(j+1,total+w[j],cap),knap(j+1,total,cap));
        }
        else
        {
            if(dp[j][total]==-1)
            dp[j][total]=knap(j+1,total,cap);
        }
    }
    return dp[j][total];
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld%lld",&p[i],&w[i]);
        }
        scanf("%lld",&g);
        for(i=0; i<g; i++)
        {
            scanf("%lld",&f[i]);
        }
        for(i=0; i<g; i++)
        {
            cap=f[i];
            memset(dp,-1,sizeof(dp));
            ans=ans+knap(0,0,cap);
        }
        printf("%lld\n",ans);
    }
}
