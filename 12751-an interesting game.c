#include<stdio.h>
int main()
{
	long long int k,n,x,i,t,j,s,d,m;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		s=0;
		d=0;
		scanf("%lld%lld%lld",&n,&k,&x);
		for(i=1;i<=n;i++)
		{
			s=s+i;
		}
		for(m=x;m<=k+x-1;m++)
		{
			d=d+m;
		}
		printf("Case %lld: %lld\n",j,s-d);
		j++;
	}
	return 0;
}
