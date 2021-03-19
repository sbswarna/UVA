#include<bits/stdc++.h>
using namespace std;
long long n,tst;
double area;
int main()
{
    tst=1;
    while(scanf("%lld%lf",&n,&area)==2)
    {
        if(n<3)
            break;
        double pi=acos(-1);
        double s=sqrt(4.00*area*tan(pi/(n*1.00))/(n*1.00));
        double r1,r2,area1,area2;
        r2=s/(2*tan(pi/n));
        r1=sqrt(((s/2.00)*(s/2.00))+(r2*r2));
        area1=(pi*r1*r1)-area;
        area2=area-(pi*r2*r2);
        printf("Case %lld: %.5lf %.5lf\n",tst,area1,area2);
        tst++;
    }
    return 0;
}
