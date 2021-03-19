#include<stdio.h>
int main()
{
	long long int m,ara[2000],i,j,temp,c,p;
	while(scanf("%lld",&m)==1)
	{
		c=0;
		for(i=0;i<m;i++)
		{
			scanf("%lld",&ara[i]);
		}
		for(i=0;i<m;i++)
		{
			p=ara[i];
			for(j=i+1;j<m;j++)
			{
				if(ara[j]<p)
				{
					c++;
				}
			}
		}
		printf("Minimum exchange operations : %lld\n",c);
	}
	return 0;
}
