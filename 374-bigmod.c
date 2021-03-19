#include<stdio.h>
#include<math.h>
long long int bigmod(long long int b, long long int p,long long int m)
{
	
	if(p==0)
	{
		return 1;
	}
	else if(p%2==0)
	{
		return (bigmod(b,p/2,m)*bigmod(b,p/2,m))%m;
	}
	else if(p%2!=0)
	{
		return (bigmod(b,p-1,m)*(b%m))%m;
	}
}
int main()
{
	long long int a,c,d,v;
	while(scanf("%lld%lld%lld",&a,&c,&v)==3)
	{
		d=bigmod(a,c,v);
		printf("%lld\n",d);
	}
	return 0;
}
