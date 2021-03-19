#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
long long int n,b[1000009],i,j,p,q,f,k;
void sieve()
{
    memset(b,0,sizeof(b));
    for(i=3; i<=sqrt(1000000); i=i+2)
    {
        if(b[i]==0)
        {
            for(j=i*i; j<=1000000; j=j+i)
            {
                b[j]=1;
            }
        }
    }
}
int main ()
{
    sieve();
    /*for(i=0;i<10;i++)
    {
            cout<<b[i]<<endl;
    }*/
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            f=0;
            k=0;
            for(i=3; i<n; i=i+2)
            {
                if(b[i]==0)
                {
                    j=n-i;
                    if(b[j]==0)
                    {

                        p=i;
                        q=j;
                        f=1;
                    }
                    else
                    {
                        f=0;
                    }
                }
                if(f==1)
                {
                    break;
                }
            }
            if(f==1)
            {
                printf("%lld = %lld + %lld\n",n,p,q);
            }
            else
            {
                printf("Goldbach's conjecture is wrong.\n");
            }
        }

    }
    return 0;
}
