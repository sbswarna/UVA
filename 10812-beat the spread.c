#include<stdio.h>
int main()
{
	long int n,s,d,a,b,i;
	while(scanf("%ld",&n)==1)
	{
	i=1;
	while(i<=n)
	{
		scanf("%ld%ld",&s,&d);
		if(s<d||s<0||d<0||(s+d)%2==1||(s-d)%2==1)
		{
			printf("impossible\n");
		}
		else
		{
				a=(s+d)/2;
				b=(s-a);
				printf("%ld %ld\n",a,b);
		}
		i++;
	}
}
	return 0;
}
