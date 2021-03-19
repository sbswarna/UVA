#include<stdio.h>
#include<math.h>
long long int bigmod(long long int b, long long int p,long long int m)
{
	long long int q;
	
	if(p==0)
	{
		return 1;
	}
	else if(p%2==0)
	{
		q=bigmod(b,p/2,m);
		return (q*q)%m;
	}
	else if(p%2!=0)
	{
		return (bigmod(b,p-1,m)*(b%m))%m;
	}
}
int main()
{
	long long int x,y,n,i,t,d;
	while(scanf("%lld",&t)==1)
	{
		if(t==0)
		{
			break;
		}
	else
	{
		i=1;
		while(i<=t)
		{
		scanf("%lld%lld%lld",&x,&y,&n);
		d=bigmod(x,y,n);
		printf("%lld\n",d);
		i++;
	}
	}
}
	return 0;
}
