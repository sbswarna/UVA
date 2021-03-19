#include<bits/stdc++.h>
using namespace std;
long long i,j,p,n,a[109],t,avg,s,q,l,tst,k[1000][100000];
long long knap(long long i,long long t,long long avg)
{
    if(t>avg)
    {
        return 0;
    }
     if(i>n)
        return 0;
    if(i==n)
    {
        return t;
    }

    if(k[i][t]!=-1)
    return k[i][t];
    k[i][t]=max(knap(i+1,t+a[i],avg),knap(i+1,t,avg));
    return k[i][t];
}
int main()
{
    scanf("%lld",&tst);
    while(tst--)
    {
        scanf("%lld",&n);
        s=0;
        memset(k,-1,sizeof(k));
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            s=s+a[i];
        }
        avg=s/2;
        p=knap(0,0,avg);
        printf("%lld\n",s-(2*p));
    }
    return 0;
}

