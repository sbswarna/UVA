#include<stdio.h>
int main()
{
	long long int n,ans;
	while(scanf("%lld",&n)==1)
	{
		if(n<0)
		{
			break;
		}
		else if(n==1)
		{
			printf("0%%\n");
		}
		else
		{
			ans=n*25;
			printf("%lld%%\n",ans);
		}
	}
	return 0;
}
