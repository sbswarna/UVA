#include<stdio.h>
int main()
{
	int t,i,ara[6],j,c=0;
	while(scanf("%d",&t)==1)
	{
	if(t>0&&t<=255)
	{
	i=1;
	while(i<=t)
	{
		c=0;
		for(j=0;j<5;j++)
		{
		scanf("%d",&ara[j]);
	}
	for(j=0;j<5;j++)
	{
		if(ara[j]<=127) 
		{
			c++;
		}
	}
		if(c==1)
		{
			if(ara[0]<=127)
			{
			printf("A\n");	
			}
			else if(ara[1]<=127)
			{
			printf("B\n");	
			}
			else if(ara[2]<=127)
			{
			printf("C\n");	
			}
			else if(ara[3]<=127)
			{
			 printf("D\n");	
			}
			else
			{
			printf("E\n");	
			}
		}
		else
		{
			printf("*\n");
		}
	i++;
	}
}
}
	return 0;
}
