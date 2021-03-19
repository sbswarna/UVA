#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)==3)
	{
		if(a>=0&&a<=1&&b>=0&&b<=1&&c>=0&&c<=1)
		{
			if(a==b&&c!=a&&c!=b)
			{
				printf("C\n");
			}
			else if(b==c&&a!=b&&a!=c)
			{
				printf("A\n");
			}
			else if(c==a&&b!=a&&b!=c)
			{
				printf("B\n");
			}
			else if(a==b&&b==c&&c==a)
			{
				printf("*\n");
			}
		}
	}
	return 0;
}
