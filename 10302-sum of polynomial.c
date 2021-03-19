#include<stdio.h>
int main()
{
	long int x,i,sum=0;
	while(scanf("%ld",&x)==1)
	{
		if(x>=1&&x<=50000)
		{
			for(i=1;i<=x;i++)
			{
				sum=sum+(i*i*i);
			}
			printf("%ld\n",sum);
			sum=0;
		}
	}
	return 0;
}
