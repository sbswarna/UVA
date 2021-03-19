#include<stdio.h>
	long long int c[1000005],a[1000005],b[1000005],i,k,m,t,s,p,n;

int main()
{
	scanf("%lld",&t);
	m=1;
	while(m<=t)
	{
		p=0;
		printf("\n");
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld %lld",&a[i],&b[i]);
		}
		
		k=0;
		for(i=n-1;i>=1;i--)
		{
			s=a[i]+b[i]+p;
			c[k]=s%10;
			k++;
			if(s<10)
			{
				p=0;
			}
			else
			{
				p=1;
			}
		}
		printf("%lld",a[0]+b[0]+p);
		for(i=k-1;i>=0;i--)
		{
			printf("%lld",c[i]);
		}
		printf("\n");

		m++;
	}
	return 0;
}
