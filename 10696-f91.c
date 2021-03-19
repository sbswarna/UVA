#include<stdio.h>
int main()
{
	long long int N,f91;
	while(scanf("%lld",&N)==1)
	{
		if(N==0)
		{
			break;
		}
		else if(N<=1000000)
		{
		if(N<=100)
		{
			printf("f91(%lld) = 91\n",N);
		}
		else if(N>=101)
		{
			f91=N-10;
		printf("f91(%lld) = %lld\n",N,f91);
			
		}
	}
	}
	return 0;
}
