#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
long long a[1000009],i,j,p,q,f,n;
void sieve()
{
    memset(a,0,sizeof(a));
    for(i=2; i<sqrt(1000009); i++)
    {
        if(a[i]==0)
        {

            for(j=i*i; j<1000009; j=j+i)
            {
                a[j]=1;
            }
        }
    }
}
int main()
{
    sieve();

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            f=0;
            for(i=2; i<=n/2; i++)
            {
                j=n-i;
                if(a[i]==0&&a[j]==0)
                {
                    p=i;
                    q=j;
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                printf("%lld:\n%lld+%lld\n",n,p,q);
            }
            else
            {
                printf("%lld:\nNO WAY!\n",n);
            }
        }
    }
    return 0;
}

