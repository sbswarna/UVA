#include<bits/stdc++.h>
using namespace std;
long long a[1299711],i,n,c,j;
void sieve()
{
    a[0]=1;
    a[1]=1;
    for(i=4;i<=1299709;i=i+2)
    {
        a[i]=1;
    }
    for(i=3;i<=sqrt(1299709);i=i+2)
    {
        for(j=i*i;j<=1299709;j=j+i)
        {
            if(a[j]==0)
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
            break;
        else
        {
            if(a[n]==0)
                cout<<0<<endl;
            else
            {
                c=0;
                for(i=n;i>=0;i--)
                {
                    if(a[i]==0)
                    {
                        break;
                    }
                    else
                        c++;
                }
                for(i=n+1;i<=1299709;i++)
                {
                    if(a[i]==0)
                        break;
                    else
                        c++;
                }
                cout<<c+1<<endl;
            }
        }
    }
    return 0;
}
