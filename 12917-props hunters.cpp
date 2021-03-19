#include<stdio.h>
int main()
{
	long long int h,p,d;
	while(scanf("%lld%lld%lld",&h,&p,&d)==3)
	{
		if(d-h>=p)
		{
			printf("Props win!\n");
		}
		else
		{
			printf("Hunters win!\n");
		}
}
return 0;
}
