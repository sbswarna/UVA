#include<stdio.h>
int main()
{
	long long int n,i,j,c=0,flag=0,h;
	while(scanf("%lld",&n)==1)
	{
		c=0;
		flag=0;
		h=0;
		if(n==0)
		{
			break;
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					h++;
					for(j=2;j<i;j++)
					{
						if(i%j==0)
						{
							flag=1;
							c++;
							break;
						}
						else
						{
							flag=0;
						}
					}
				}
			}
			printf("%lld : %lld\n",n,h-c-1);
		}
	}
	return 0;
}
