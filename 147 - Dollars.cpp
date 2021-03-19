#include<bits/stdc++.h>
using namespace std;
long long coin[11]= {5,10,20,50,100,200,500,1000,2000,5000,10000},i,t,amount,r1,r2;
double d;
long long dp[15][40000];
long long coinchange(long long i,long long t)
{
    if(i>=11)
    {
        if(t==0)
            return 1;
        else
            return 0;
    }
    if(t<0)
        return 0;
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

    while(scanf("%lf",&d)==1)
    {
        if(d==0.00)
            break;
        else
        {
            amount=(d*100);
            printf("%6.2lf%17lld\n",d,coinchange(0,amount));
        }
    }
    return 0;
}
