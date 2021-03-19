#include<stdio.h>
int main()
{
	long long int n,i,ara[5000],c,p,x,j;
	j=1;
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		{
			break;
		}
		else
		{
		c=0;
		x=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&ara[i]);
			c=c+ara[i];
		}
		p=c/n;
		for(i=0;i<n;i++)
		{
			x=x+abs(ara[i]-p);
		}
		if(x%2==0)
		{
		printf("Set #%lld\nThe minimum number of moves is %lld.\n\n",j,x/2);
		}
		else
		{
			printf("Set #%lld\nThe minimum number of moves is %lld.\n\n",j,(x+1)/2);
		}
	}
j++;
}
return 0;
}
