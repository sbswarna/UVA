#include<math.h>
int main()
{
	double r,n,p,s,a,pi,ans,x;
	while(scanf("%lf%lf",&r,&n)==2)
	{
			x=-1;
			pi=acos(x);
			s=(2*pi)/n;
			p=sin(s);
			ans=0.5*n*r*r*p;
			printf("%.3lf\n",ans);
	}
	return 0;
}
