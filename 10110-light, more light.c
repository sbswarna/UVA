#include<stdio.h>
int main()
{
	long long int a,p;
	while(scanf("%lld",&a)==1)
	{
		if(a==0)
		{
			break;
		}
		else
		{
			p=sqrt(a);
			if(p*p==a)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}
