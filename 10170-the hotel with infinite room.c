#include<stdio.h>
int main()
{
	long long int s,d,i,p=0;
	while(scanf("%lld%lld",&s,&d)==2)
	{
		for(i=1;i;i++)
		{
			p=p+s;
			s=s+1;
			if(p>=d)
			{
				break;
			}
		}
		printf("%lld\n",s-1);
		p=0;
	}
	return 0;
}
