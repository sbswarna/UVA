#include<stdio.h>
int main()
{
	long int a,b;
	while(scanf("%ld%ld",&a,&b)==2)
	{
		if(a>=1&&a<=13&&b>=1&&b<=13)
		{
		if(a>=b)
		{
			printf("%ld\n",a);
		}
		else
		{
			printf("%ld\n",b);
		}
	}
	}
	return 0;
}
