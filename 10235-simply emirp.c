#include<stdio.h>
int main()
{
	long long int n,i,flag=0,m,s=0,x,j;
	while(scanf("%lld",&n)==1)
{
		x=n;
		s=0;
		flag=0;	
			for(i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				printf("%lld is not prime.\n",x);
			}
			else
			{
				for(j=1;j;j++)
				{
			m=n%10;
			n=n/10;
			s=s*10+m;
			if(n==0)
			{
				break;
				}
			}
			if(s==x)
			{
				printf("%lld is prime.\n",x);
			}
			else
			{
				flag=0;
				for(i=2;i<=s/2;i++)
				{
				if(s%i==0)
				{
					flag=1;
					break;
				}	
				}
				if(flag==1)
				{
					printf("%lld is prime.\n",x);
					}	
					else
					{
						printf("%lld is emirp.\n",x);
					}
				}
			}
	}
	return 0;
}
