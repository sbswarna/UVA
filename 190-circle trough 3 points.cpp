#include<bits/stdc++.h>
using namespace std;
double f1(double x1,double x2,double y1,double y2)
{
    return (x1*x1)+(y1*y1)-(x2*x2)-(y2*y2);
}
double f2(double x,double y)
{
    return (2*x)-(2*y);
}
int main()
{
    double k1,k2,a,b,c,g,f,p,q,r,t,p1,q1,p2,q2,x1,x2,x3,y1,y2,y3,x,y,z,k,l;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        k1=f1(x1,x2,y1,y2);
        k2=f1(x2,x3,y2,y3);
        p1=f2(x1,x2);
        q1=f2(y1,y2);
        p2=f2(x2,x3);
        q2=f2(y2,y3);
        p=(q2*k1)-(q1*k2);
        q=(p1*k2)-(p2*k1);
        t=(p1*q2)-(p2*q1);
        a=p/t;
        b=q/t;
        r=pow((pow((a-x1),2)+pow((b-y1),2)),0.5);
        z=(r*r)-(a*a)-(b*b);
        k=(-2)*a;
        l=(-2)*b;
        if(a<0&&a!=(-0))
        {
            printf("(x + %.3lf)^2 ",(-1)*a);
        }
        else if(a==0||a==(-0))
        {
            printf("x^2 ");
        }
        else if(a>-0&&a!=0)
        {
            printf("(x - %.3lf)^2 ",a);
        }
        if(b<0&&b!=(-0))
        {
            printf("+ (y + %.3lf)^2 = %.3lf^2\n",(-1)*b,r);
        }
        else if(b==0||b==(-0))
        {
            printf("+ y^2 = %.3lf^2\n",r);
        }
        else if(b>-0&&b!=0)
        {
            printf("+ (y - %.3lf)^2 = %.3lf^2\n",b,r);
        }
        printf("x^2 + y^2 ");
        if(k>-0&&k!=0)
        {
            printf("+ %.3lfx ",k);
        }
        if(k==0||k==(-0)&&l!=0)
        {
            if(l>(-0))
            {
            	printf("+ %.3lfy ",l);
			}
			else if(l<0&&l!=-0)
			{
				printf("+ %.3lfy ",(-1)*l);
			}
        }
        else if(k<0&&k!=(-0))
        {
            printf("- %.3lfx ",(-1)*k);
        }
        if(l>-0&&l!=0&&(k!=0||k!=-0))
        {
            printf("+ %.3lfy ",l);
        }
        else if(l==0||l==(-0)&&(k!=0||k!=-0))
        {
            printf("+ ");
        }
        else if(l<0&&l!=(-0)&&(k!=0||k!=-0))
        {
            printf("- %.3lfy ",(-1)*l);
        }
        if(z<0&&z!=(-0)&&l!=0)
        {
            printf("+ %.3lf = 0\n",(-1)*z);
        }
        else if(z==0||z==(-0))
        {
            printf("= 0\n");
        }
        else if(z>-0&&z!=0&&l!=0)
        {
            printf("- %.3lf = 0\n",z);
        }
        else if(z>-0&&z!=0&&l==0)
        {
            printf("%.3lf = 0\n",z);
        }
        if(z<0&&z!=(-0)&&l==0)
        {
            printf("%.3lf = 0\n",(-1)*z);
        }
    }
    return 0;
}
