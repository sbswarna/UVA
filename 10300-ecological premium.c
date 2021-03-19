#include<stdio.h>
int main()
{
	long long int l,a,e,i,j,t,f,sum;
	scanf("%lld",&t);
	if(t<=20&&t>0)
	{
		i=1;
		while(i<=t)
		{
			sum=0;
			scanf("%lld",&f);
			if(f<=20&&f>0)
			{
				j=1;
				while(j<=f)
				{
					scanf("%lld%lld%lld",&l,&a,&e);
					sum=sum+(l*e);
					j++;
				}
				printf("%lld\n",sum);
			}
		i++;
	}
	}
	return 0;
}
