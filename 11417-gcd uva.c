#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	long long int c;

	while(a!=0)
	{
		c=b%a;
		b=a;
		a=c;
	}
	return b;
}
int main()
{
	long long int n,j,k,v;
	while(scanf("%lld",&n)==1)
	{
		v=0;
		if(n==0)
		{
			break;
		}
		else
		{
		for(j=1;j<n;j++)
		{
			for(k=j+1;k<=n;k++)
			{
				v=v+gcd(j,k);
			}
		}
		printf("%lld\n",v);
	}
}
	return 0;
}
