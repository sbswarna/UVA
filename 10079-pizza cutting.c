#include<stdio.h>
int main()
{
	long int N,p;
	while(scanf("%ld",&N)==1)
	{
		if(N<0)
		{
			break;
		}
		else if(N>=0&&N<=210000000)
		{
			p=(N*(N+1)/2)+1;
			printf("%ld\n",p);	
		}
	}
	return 0;
}
