#include<stdio.h>
int main()
{
	long long int t,i,j,y,n,flag=0,p;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		flag=0;
		scanf("%lld",&n);
		p=(n+2)/2;
		for(i=p;i<=n;i++)
		{
			for(y=2;y<i;y++)
			{
				if(i%y==0)
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			if(flag==0)
			{
				printf("%lld\n",i);
				break;
			}
		}
		j++;
	}
	return 0;
}
