#include<bits/stdc++.h>
using namespace std;
vector<double>v;
double x,y;
long long n,i;
int main()
{
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
        {
            double area1,area2;
            double ans,mx=-1;
            for(i=0; i<n; i++)
            {
                cin>>x>>y;
                double s=x,t=y;
                s=s/2;
                t=t/2;
                if(s>t)
                {
                    s=t;
                }
                else
                {
                    t=s;
                }
                area1=t*t;
                if(x!=y)
                {
                    if(x>y)
                    {
                        x=x/4;
                        if(x>y)
                        {
                            x=y;
                        }
                        else
                        {
                            y=x;
                        }
                    }
                    else
                    {
                        y=y/4;
                        if(y>x)
                        {
                            y=x;
                        }
                        else
                        {
                            x=y;
                        }
                    }
                }
                else
                {
                    x=x/2;
                    y=y/2;
                }
                area2=x*y;
                double p=max(area1,area2);
                if(p>mx)
                {
                    mx=p;
                    ans=i;
                }
            }
            cout<<ans+1<<endl;
        }
    }
    return 0;
}
