#include<bits/stdc++.h>
using namespace std;
long long i,a[24],n,t,ways[24][10009],ans;
long long cc( long long i, long long t)
{
    if(t<0)
    {
        return 0;
    }
    if(i>21)
    {
        if(t==0)
            return 1;
        else
            return 0;
    }
    else
    {

        if(ways[i][t]==-1)
            return ways[i][t]=cc(i,t-a[i])+cc(i+1,t);
        else

            return ways[i][t];
    }


}
int main()
{
    memset(ways,-1,sizeof(ways));
    for(i=1; i<=21; i++)
        a[i]=i*i*i;
    while(scanf("%lld",&n)==1)
    {
        ans=cc(1,n);
        printf("%lld\n",ans);
    }
    return 0;
}
