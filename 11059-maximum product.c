#include<stdio.h>
int main()
{
	long long int x,i,j,ara[100],max=0,p=1,n,k;
	k=1;
	while(scanf("%lld",&n)==1)
	{
		p=1;
		max=0;
		x=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&ara[i]);
		}
		for(i=0;i<n;i++)
		{
				p=1;
				for(j=i;j<n;j++)
				{
					p=p*ara[j];
				if(p>=max)
				{
					max=p;
				}
				else if(p<x)
				{
					x=p;
				}
				}
			}
		if(max>0)
		{
		printf("Case #%lld: The maximum product is %lld.\n",k,max);
		printf("\n");
	}
	else if(x<=0)
	{
		printf("Case #%lld: The maximum product is 0.\n",k);
		printf("\n");
	}
	k++;
}
return 0;
}
