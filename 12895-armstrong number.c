#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,p,d,sum=0,x,c=0,q,y,j,t;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		scanf("%lld",&n);
		if(n<=1000000000)
		{
	x=n;
	y=n;
	for(i=1;i;i++)
	{
		q=n%10;
		d=n/10;
		n=d;
		c++;
		if(d==0)
		{
			break;
		}	
	}
	for(i=1;i;i++)
	{
		p=x%10;
		x=x/10;
		sum=sum+pow(p,c);
		if(x==0)
		{
			break;
		}
	}
	if(sum==y)
	{
		printf("Armstrong\n");
	}
	else
	{
		printf("Not Armstrong\n");
	}
}
c=0;
sum=0;
	j++;
}
}
