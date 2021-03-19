#include<stdio.h>
int main()
{
	long long int a=0,b=1,n,i,j,s1,s2,c;
	while(scanf("%lld",&n)==1)
	{
		if(n<0)
		{
			break;
		}
		else if(n>1)
		{
			a=0;
			b=1;
			c=a+b;
			s1=0;
			s2=0;
			for(i=1;i<n-1;i++)
			{
				a=b;
				b=c;
				c=a+b;
				s1=s1+c;
			}
			a=0;
			b=1;
			c=a+b;
			for(i=1;i<=n-1;i++)
			{
				a=b;
				b=c;
				c=a+b;
				s2=s2+c;
			}
			printf("%lld %lld\n",s1+2, s2+2);
		}
		else if(n==1)
		{
			printf("1 2\n");
		}
		else if(n==0)
		{
			printf("0 1\n");
		}
	}
	return 0;
}
