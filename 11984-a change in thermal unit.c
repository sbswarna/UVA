#include<stdio.h>
int main()
{
	double F,d,t,i,f,C,c;
	scanf("%lf",&t);
	i=1;
	while(i<=t)
	{
		scanf("%lf%lf",&C,&d);
		F=((9.00/5.00)*C)+32.00;
		f=d+F;
		c=(5.00/9.00)*(f-32.00);
		printf("Case %.0lf: %.3lf\n",i,c);
		i++;
	}
	return 0;
}
