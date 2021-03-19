#include<stdio.h>
int main()
{
	long long int n,p,q,a[600],s,c,j,t,i;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		s=0;
		c=0;
		scanf("%lld%lld%lld",&n,&p,&q);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			s=s+a[i];
			if(i>=p||s>q)
			{
				break;
			}
			c++;
		}
		printf("Case %lld: %lld\n",j,c);
		j++;
	}
	return 0;
}
