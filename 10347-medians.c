#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,area,ma,mb,mc,p,q,r,d,e,f,x,y,z,k,s;
	while(scanf("%lf%lf%lf",&ma,&mb,&mc)==3)
	{
		if(ma==0||mb==0||mc==0||ma+mb<=mc||mb+mc<=ma||mc+ma<=mb)
		{
			printf("-1.000\n");
		}
		else
		{
		p=(2*mb*mb)+(2*mc*mc)-(ma*ma);
		q=(2*mc*mc)+(2*ma*ma)-(mb*mb);
		r=(2*ma*ma)+(2*mb*mb)-(mc*mc);
		d=(pow(p,0.5));
		e=(pow(q,0.5));
		f=(pow(r,0.5));
		a=(2*d)/3;
		b=(2*e)/3;
		c=(2*f)/3;
		if((a+b)>=c||(a+c)>=b||(b+c)>=a)
		{
			s=(a+b+c)/2;
			x=(s-a);
			y=(s-b);
			z=(s-c);
			k=s*x*y*z;
			area=pow(k,0.5);
			printf("%.3lf\n",area);
		}
		else
		{
			printf("-1.000\n");
		}
	}
	}
	return 0;
}
