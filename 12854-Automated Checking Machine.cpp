#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,flag=0;
	while(scanf("%d",&a[0])==1)
	{
		flag=0;
		for(i=1;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<5;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<5;i++)
		{
			if(a[i]==b[i])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==0)
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}
	return 0;
}
