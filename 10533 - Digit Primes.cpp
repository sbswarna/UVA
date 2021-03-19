#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001],i,j,t1,t2,tst;
int main()
{
    memset(a,0,sizeof(a));
    a[1]=1;
    for(i=4; i<=1000000; i=i+2)
    {
        a[i]=1;
    }
    for(i=3; i<=sqrt(1000000); i=i+2)
    {
        for(j=i*i; j<=1000000; j=j+i)
        {
            a[j]=1;
        }
    }
    b[1]=0;
    b[2]=1;
    for(i=3; i<=1000000; i=i+2)
    {
        long long s=0;
        if(a[i]==0)
        {
            stringstream ss;
            ss<<i;
            string st=ss.str();
            for(j=0; j<st.size(); j++)
                s=s+(st[j]-48);
            if(a[s]==0)
            {
                b[i]=b[i-1]+1;
            }
            else
            {
                b[i]=b[i-1];
            }
        }
        else
        {
            b[i]=b[i-1];
        }
        b[i+1]=b[i];
    }
    scanf("%lld",&tst);
    while(tst--)
    {
        scanf("%lld%lld",&t1,&t2);
        printf("%lld\n",b[t2]-b[t1-1]);
    }
    return 0;
}
