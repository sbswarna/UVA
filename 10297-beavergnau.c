#include<stdio.h>
#include<math.h>
int main()
{
	double x,pi,D,V,d3,d,a,b;
	while(scanf("%lf%lf",&D,&V)==2)
	{
		if(D==0&&V==0)
		{
			break;
		}
		else
		{
			x=-1;
			pi=acos(x);
			a=(pi/6.00)*(pow(D,3));
			b=(pi/6.00);
			d3=(a-V)/b;
			d=pow(d3,(1.00/3.00));
			printf("%.3lf\n",d);
		}
	}
	return 0;
}
