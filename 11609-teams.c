#include<stdio.h>
#include<math.h>
long long int bigmod(long long int b, long long int p,long long int m)
{
    long long int d;
    if(p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
        d=bigmod(b,p/2,m);
        return (d*d)%m;
    }
    else if(p%2!=0)
    {
        return (bigmod(b,p-1,m)*(b%m))%m;
    }
}
int main()
{
    long long int i,t,a,p,r;
    scanf("%lld",&t);
    i=1;
    while(i<=t)
    {
        scanf("%lld",&a);
        p=1000000007;
        r=(a*bigmod(2,a-1,p))%p;
        printf("Case #%lld: %lld\n",i,r);
        i++;
    }
    return 0;
}
