#include<stdio.h>
int main()
{
	long long int n,d,p,i,sum;
	while(scanf("%lld",&n)==1)
	{
		sum=0;
		if(n==0)
		{
			break;
		}
		else if(n<=2000000000&&n>0)
		{
	for(i=1;i;i++)
	{
		p=n%10;
		d=n/10;
		sum=sum+p;
		n=d;
		if(d==0)
		{
			if(sum<10)
			{
				printf("%lld\n",sum);
				break;
			}
			else
			{
				n=sum;
				sum=0;
			}
		}
	}
}
}
	return 0;
}
