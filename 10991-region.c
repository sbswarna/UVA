#include<stdio.h>
#include<math.h>
int main()
{
    double t,m,a,b,c,pi,r1,r2,r3,A,B,C,Ta,sa,sb,sc,area,y,s;
    scanf("%lf",&t);
    m=1;
    while(m<=t)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        y=-1;
        pi=acos(y);
        A=((acos(((b*b)+(c*c)-(a*a))/(2*b*c))));
        B=((acos(((c*c)+(a*a)-(b*b))/(2*a*c))));
        C=((acos(((b*b)+(a*a)-(c*c))/(2*b*a))));
        s=(a+b+c)/2.00;
        Ta=pow((s*(s-a)*(s-b)*(s-c)),0.5);
        sa=(A/2.00)*r3*r3;
        sb=(B/2.00)*r1*r1;
        sc=(C/2.00)*r2*r2;
        area=Ta-(sa+sb+sc);
        printf("%.6lf\n",area);
        m++;
    }
    return 0;
}
