#include<stdio.h>
int main()
{
	long long int m,n,p;
	while(scanf("%lld%lld",&m,&n)==2)
	{
		if(m>=1&&m<=300&&n>=1&&n<=300)
		{
		p=(m*n)-1;
		printf("%lld\n",p);
	}
	}
	return 0;
}
