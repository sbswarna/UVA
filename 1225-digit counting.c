#include<stdio.h>
int main()
{
	long long int j,i,n,t;
	char s[30000];
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			s[i]=i;
			printf("%c",s[i]);
		}
	}
}
