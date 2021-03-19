#include<bits/stdc++.h>
using namespace std;
long long amount,dp[10][30008],i,coin[5]= {1,5,10,25,50},ans;
long long coinchange(long long i,long long t)
{
    if(t<0)
        return 0;
    if(i>=5)
    {
        if(t==0)
            return 1;
        else
            return 0;
    }
    else
    {
        if(dp[i][t]==-1)
        return dp[i][t]=coinchange(i,t-coin[i])+coinchange(i+1,t);
    else
        return dp[i][t];
    }
}
int main()
{
            memset(dp,-1,sizeof(dp));

    while(scanf("%lld",&amount)==1)
    {
        ans=coinchange(0,amount);
        if(ans==1)
        {
            printf("There is only %lld way to produce %lld cents change.\n",ans,amount);
        }
        else
        {
            printf("There are %lld ways to produce %lld cents change.\n",ans,amount);
        }
    }
}
