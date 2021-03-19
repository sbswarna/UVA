#include<stdio.h>
int main()
{
	long long int i,j,k,t,n,ara[5000],l,h;
	scanf("%lld",&t);
	k=1;
	while(k<=t)
	{
		l=0;
		h=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&ara[i]);
		}
		for(i=1;i<n;i++)
		{
			for(j=i-1;j<=i;j++)
			{
				if(ara[i]>ara[j])
				{
					l++;
				}
				else if(ara[i]<ara[j])
				{
					h++;
				}
			}
		}
		printf("Case %lld: %lld %lld\n",k,l,h);
		k++;
	}
	return 0;
}
