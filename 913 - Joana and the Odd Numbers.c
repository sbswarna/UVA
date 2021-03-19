#include<stdio.h>
int main()
{
	long long int s,i,n;
	while(scanf("%lld",&n)==1)
	{
		s=0;
		for(i=n;i>=3;i=i-2)
		{
			s=s+(6*i);
		}
		printf("%lld\n",s-3);
	}
	return 0;
}
