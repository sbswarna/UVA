#include<stdio.h>
int main()
{
	int ara[60],i,j,k,n,l,min,c=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		c=0;
		scanf("%d",&l);
		if(l>=0&&l<=50)
		{
		for(j=0;j<l;j++)
		{
			scanf("%d",&ara[j]);
		}
		
		for(j=0;j<l;j++)
		{
			min=ara[j];
			for(k=j+1;k<l;k++)
			{
				if(ara[k]<=min)
				{
				min=ara[k];
				ara[k]=ara[j];
				ara[j]=min;
				c++;
			}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",c);
	}
}
	return 0;
}
