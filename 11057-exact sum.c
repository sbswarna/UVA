#include<stdio.h>
int main()
{
	long long int n,m,i,j,ara[10003],p,q,s,t,min,a,b;
	while(scanf("%lld",&n)==1)
	{
		min=999999999999;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&ara[i]);
		}
		scanf("%lld",&m);
		for(i=0;i<n;i++)
		{
			p=ara[i];
			for(j=i+1;j<n;j++)
			{
				s=p+ara[j];
				if(s==m)
				{
					
					if(abs(p-ara[j])<=min)
					{
						min=abs(p-ara[j]);
						if(p>ara[j])
						{
							a=p;
							b=ara[j];
						}
						else
						{
							a=ara[j];
							b=p;
						}
					}
				}
			}
	}
		printf("Peter should buy books whose prices are %lld and %lld.\n\n",b,a);
		
	}
	return 0;
}
