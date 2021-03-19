#include<stdio.h>
int main()
{
	long long int ara[110],i,j,n,t,max=0;
	scanf("%lld",&t);
	if(t<=50)
	{
	i=1;
	while(i<=t)
	{
		max=0;
		scanf("%lld",&n);
		if(n>=1&&n<=100)
		{
		for(j=0;j<n;j++)
		{
			scanf("%lld",&ara[j]);
		}
		for(j=0;j<n;j++)
		{
			if(ara[j]>=max)
			{
				max=ara[j];
			}
		}
		printf("Case %lld: %lld\n",i,max);
		i++;
	}
}
}
	return 0;
}
