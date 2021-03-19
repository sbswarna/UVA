#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,p,q,k,d,x,pi;
	while(scanf("%lf",&a)==1)
	{
		x=-1;
		pi=acos(x);
		k=(pi*63)/180;
		d=(pi*108)/180;
		p=sin(k);
		q=sin(d);
		b=(a*q)/p;
		printf("%.10lf\n",b);
	}
	return 0;
}
