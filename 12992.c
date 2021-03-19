#include<stdio.h>
int main()
{
	long long int a,i,t;
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%lld",&a);
		printf("Case #%lld: %lld\n",i,(2*a)-1);
		i++;
	}
	return 0;
}
