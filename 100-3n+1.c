#include<stdio.h>
int main()
{
	long long int a,b,x,i,j,c,p,max,m,n,y;
	while(scanf("%lld%lld",&a,&b)==2)
	{
		m=a;
		n=b;
		if(a>b)
		{
			x=a;
			a=b;
			b=x;
		}
		c=0;
		max=0;
		for(i=a;i<=b;i++)
		{
			y=i;
			c=0;
			for(j=1;j;j++)
			{
				if(y==1)
				{
					break;
				}
				else
				{
					if(y%2==0)
				{
					p=y/2;
					c++;
				}
				else
				{
					p=(3*y)+1;
					c++;
				}
			}
				y=p;
			}
			if(c>=max)
			{
				max=c;
			}
		}
		printf("%lld %lld %lld\n",m,n,max+1);
	}
	return 0;
}

