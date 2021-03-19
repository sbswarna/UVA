#include<stdio.h>
int main()
{
	long long int a[1000],n,m,i,j,f,c;
	while(scanf("%lld%lld",&n,&m)==2)
	{
		c=0;
		for(i=1;i<=n;i++)
		{
			f=0;
			for(j=0;j<m;j++)
			{
				scanf("%lld",&a[j]);
			}
			for(j=0;j<m;j++)
			{
				if(a[j]==0)
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				c++;
			}
		}
		printf("%lld\n",c);
	}
	return 0;
}
