#include<bits/stdc++.h>
using namespace std;
long long d,i,p,n,c;
double ans;
int main()
{
    while(scanf("%lld%lld",&n,&c)==2)
    {
        if(n==0&&c==0)
            break;
        else
        {
            if(n-c>c)
            {
                p=n-c;
            }
            else
            {
                p=c;
            }
            //cout<<p<<endl;
            ans=1.00;
            d=1;
            for(i=p+1;i<=n;i++)
            {
                ans=ans*(i*1.00);
                ans=ans/(d*1.00);
                d++;
            }
            printf("%.0lf\n",ans);
        }
    }
    return 0;
}
