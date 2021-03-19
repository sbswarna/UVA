#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,s;
	while(scanf("%lld",&n)==1)
	{
		s=0;
		if(n==0)
		{
			break;
		}
		else if(n>0&&n<=100)
		{
			for(i=1;i<=n;i++)
			{
				s=s+pow(i,2);
			}
			printf("%lld\n",s);
		}
	}
	return 0;
}
