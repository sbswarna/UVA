#include<stdio.h>
int main()
{
	int n,k,p,t,i,ans;
	scanf("%d",&t);
	i=1;
	while(i<=t)
	{
		scanf("%d%d%d",&n,&k,&p);
			ans=k+p;
	if(ans<=n)
	{
		printf("Case %d: %d\n",i,ans);
	}
	else
	{
	if(ans%n==0)
	{
		printf("Case %d: %d\n",i,n);
	}
	else
	{
		printf("Case %d: %d\n",i,ans%n);
	}
	}
		i++;
	}
	return 0;
}
