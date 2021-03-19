#include<stdio.h>
#include<math.h>
int main()
{
	long long int i,t,n,c;
	double p;
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%lld",&n);
		p=pow((1+(8*n)),0.5);
		c=(p-1)/2;
		printf("%lld\n",c);
		i++;
	}
	return 0;
}
