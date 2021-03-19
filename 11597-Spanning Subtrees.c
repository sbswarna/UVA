#include<stdio.h>
int main()
{
	long long int i,n;
	i=1;
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		break;
		else
		printf("Case %lld: %lld\n",i,n/2);
		i++;
	}
	return 0;
}
