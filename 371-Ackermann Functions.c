#include<stdio.h>
int main()
{
	long long int a,b,x,i,j,c,p,max,m,n,y,k;
	while(scanf("%lld%lld",&a,&b)==2)
	{
		if(a==0||b==0)
		{
			break;
		}
		else
		{
		if(a>b)
		{
			m=a;
			n=b;
		}
		else
		{
			m=b;
			n=a;
		}
		c=0;
		max=0;
		for(i=m;i>=n;i--)
		{
			y=i;
			c=0;
			for(j=1;j;j++)
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
				y=p;
				if(p==1)
				{
					break;
				}	
			}
			if(c>=max)
			{
				max=c;
				k=i;
			}
		}
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",n,m,k,max);
	}
	return 0;
}

