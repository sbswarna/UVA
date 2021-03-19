#include<stdio.h>
int main()
{
	long long int I,m,c=0,p,ara[100000],k,j;
	while(scanf("%lld",&I)==1)
	{
		if(I==0)
		{
			break;
		}
		else if(I<=2147483647&&I>=1)
		{
	for(k=1;k;k++)
	{
		m=I%2;
		p=I/2;
		I=p;
	ara[k]=m;
		if(p==0)
		{
			break;
		}
	}
	printf("The parity of ");
	for(j=k-1;j>=0;j--)
	{
		printf("%lld",ara[j+1]);
			if(ara[j+1]==1)
	{
		c=c+1;
	}
	}
	printf(" is %lld (mod 2).\n",c);
	c=0;
}
}

	return 0;
}

