#include<stdio.h>
int main()
{
	long long int n,i,b,c,ans,ara[1200],j;
	i=1;
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		{
			break;
		}
	else
	{
		b=0;
		c=0;
		for(j=0;j<n;j++)
		{
			scanf("%lld",&ara[j]);
		}
		for(j=0;j<n;j++)
		{
			if(ara[j]>=1&&ara[j]<=99)
			{
				b++;
			}
			if(ara[j]==0)
			{
				c++;
			}
		}
		ans=b-c;
		printf("Case %lld: %lld\n",i,ans);
	}
	i++;
	}
	return 0;
}
