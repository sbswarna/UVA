#include<stdio.h>
long long int prime(long long int a)
{
	long long int i,f;
	f=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}
int main()
{
	long long int n,j,d,ara[10000],c,s,p,k;
	while(scanf("%lld",&n)==1)
	{
	
		d=0;
		c=0;
		s=0;
		
		if(n==0)
		{
			break;
		}
		else
		{
			for(j=2;j<=n;j++)
			{
				p=prime(j);
				if(p==2)
				{
					ara[d]=j;
					d++;
				}
			}
			for(j=0;j<d;j++)
			{
				s=ara[j];
				ara[d]=0;
				for(k=j+1;k<=d;k++)
				{
					s=s+ara[k];
					if(s==n)
					{
						c++;
						break;
					}
				}
			}
			printf("%lld\n",c);
		}
	}
	return 0;
}
