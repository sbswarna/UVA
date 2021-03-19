#include<stdio.h>
int main()
{
	long long int N,m,p,ara[100000],i,j;
	while(scanf("%lld",&N)==1)
	{
		if(N<0)
		{
			break;
		}
		else if(N<1000000001)
		{
	for(i=1;i;i++)
	{
		m=N%3;
		p=N/3;
		N=p;
	ara[i]=m;
		if(p==0)
		{
			break;
		}
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%lld",ara[j+1]);
	}
}
	printf("\n");
}

	return 0;
}

