#include<stdio.h>
int main()
{
	long int i,t,l,w,h;
	scanf("%ld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%ld%ld%ld",&l,&w,&h);
		if(l<=20&&w<=20&&h<=20)
		{
			printf("Case %ld: good\n",i);
		}
		else
		{
		printf("Case %ld: bad\n",i);	
		}
		i++;
	}
	return 0;
}
