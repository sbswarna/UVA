#include<stdio.h>
int main()
{
	long long int n;
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			printf("1/2\n");
		}
	}
	return 0;
}
