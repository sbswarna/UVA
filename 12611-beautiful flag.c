#include<stdio.h>
int main()
{
	long long int x1,y1,x2,y2,x3,y3,x4,y4,x,y,length,width,radius,i,t;
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%lld",&radius);
		length=5*radius;
		width=3*radius;
		x=length/20;
		x1=(-1)*(9*x);
		y1=width/2;
		x2=(11*x);
		y2=width/2;
		x3=(11*x);
		y3=(-1)*(width/2);
		x4=(-1)*(9*x);
		y4=(-1)*(width/2);
		printf("Case %lld:\n%lld %lld\n%lld %lld\n%lld %lld\n%lld %lld\n",i,x1,y1,x2,y2,x3,y3,x4,y4);
		i++;
	}
	return 0;
}
