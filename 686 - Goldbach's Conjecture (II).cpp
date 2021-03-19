#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
long long int n,b[32804],i,j,p,q,f,k;

int main ()
{
    memset(b,0,sizeof(b));
    b[1]=1;
    for(i=4; i<=32800; i=i+2)
        b[i]=1;
    for(i=3; i<=sqrt(32800); i=i+2)
    {
        if(b[i]==0)
        {
            for(j=i*i; j<=32800; j=j+i)
            {
                b[j]=1;
            }
        }
    }
    long long a[32780];
    while(scanf("%lld",&n)==1)
    {
        memset(a,0,sizeof(a));
        if(n==0)
        {
            break;
        }
        else
        {
            long long cnt=0;
            for(i=2; i<n; i++)
            {
                if(b[i]==0&&a[i]==0)
                {
                    a[i]=1;
                    j=n-i;
                    if(j!=i)
                    {
                    if(b[j]==0&&a[j]==0)
                    {
                        cnt++;
                    }
                    }
                    else if(j==i)
                    {
                        if(b[j]==0)
                    {
                        cnt++;
                    }
                    }

                }

            }
            printf("%lld\n",cnt);
        }
    }
    return 0;
}
