#include<stdio.h>
int main()
{
	long long int t,i,j,ara[60],d,e,p,q,a1,a2,n;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		a1=0;
		a2=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&ara[i]);
		}
		for(i=0;i<n;i++)
		{
			d=ara[i]%30;
			e=ara[i]/30;
			a1=a1+10+(e*10);
		}
		for(i=0;i<n;i++)
		{
			p=ara[i]%60;
			q=ara[i]/60;
			a2=a2+15+(q*15);
		}
		if(a1>a2)
		{
			printf("Case %lld: Juice %lld\n",j,a2);	
		}
		else if(a1<a2)
		{
			printf("Case %lld: Mile %lld\n",j,a1);
		}
		else
		{
			printf("Case %lld: Mile Juice %lld\n",j,a1);
		}
		j++;	
	}
	return 0;
}
