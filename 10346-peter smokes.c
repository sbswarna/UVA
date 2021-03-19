#include<stdio.h>
int main()
{
	long long int m,n,p,i,sum=0,x,q;
	while(scanf("%lld%lld",&m,&n)==2)
	{
		if(n>1)
		{
		sum=0;
		x=m;
		for(i=1;i;i++)
		{
			p=m/n;
			q=m%n;
			m=p+q;
			sum=sum+p;
			if(m<n)
			{
				break;
			}
		}
		printf("%lld\n",sum+x);
	}
	else
	{
		break;
	}
}
	return 0;
}
