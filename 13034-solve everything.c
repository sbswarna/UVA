#include<stdio.h>
int main()
{
	long int ara[20],i,j,t,flag=0;
	scanf("%ld",&t);
	i=1;
	while(i<=t)
	{
		flag=0;
		for(j=0;j<13;j++)
		{
			scanf("%ld",&ara[j]);
		}
		for(j=0;j<13;j++)
		{
			if(ara[j]==0)
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("Set #%ld: No\n",i);
		}
		else
		{
			printf("Set #%ld: Yes\n",i);
		}
		i++;
	}
	return 0;
}
