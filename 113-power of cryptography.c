#include<stdio.h>
#include<math.h>
int main()
{
	double n,p,k,t;
	printf("%lld\n",pow(2,64));
	while(scanf("%lf%lf",&n,&p)==2)
	{
		t=1/n;
		k=pow(p,t);
		printf("%.0lf\n",k);
	}
	return 0;
}
