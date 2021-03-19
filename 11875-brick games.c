#include<stdio.h>
int main()
{
	long int t,i,n,j,ara[20];
	scanf("%ld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%ld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%ld",&ara[j]);
		}
		printf("Case %ld: %ld\n",i,ara[((n-1)/2)]);
		i++;
	}
	return 0;
}
