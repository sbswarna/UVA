#include<stdio.h>
int main()
{
	long long int p,n,m,d,sum,i,j,x,t,k,l,s,y,c;
	scanf("%lld",&n);
	i=1;
	while(i<=n)
	{
		scanf("%lld",&p);
		sum=0;
		s=0;
		c=1;
		while(c<=1000)
		{
		x=p;
		for(j=1;j;j++)	
		{
			m=p%10;
			d=p/10;
			p=d;
			sum=sum*10+m;
			if(d==0)
			{
				break;
			}
		}
		t=x+sum;
		y=t;
		for(j=1;j;j++)
		{
			k=t%10;
			l=t/10;
			t=l;
			s=s*10+k;
			if(l==0)
			{
				break;
			}
		}
		if(s==y&&y<=4294967295)
		{
			printf("%lld %lld\n",c,y);
			break;
		}
		else
		{
			p=y;
			sum=0;
			s=0;
		}
		c++;
		}
		i++;
	}
return 0;
}