#include<stdio.h>
int main()
{
	int A[5],i,j,t,c=0;
	while(scanf("%d",&t)==1)
	{
		if(t>=1&&t<=4)
		{
			for(i=0;i<=4;i++)
			{
				scanf("%d",&A[i]);
			}
			for(i=0;i<=4;i++)
			{
			if(A[i]==t)
			{
				c++;
			}
			}
			printf("%d\n",c);
		}
		c=0;
	}
	return 0;
}
