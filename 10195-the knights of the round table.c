#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,s,at,r,x;
	while(scanf("%lf%lf%lf",&a,&b,&c)==3)
	{
		if(a==0||b==0||c==0)
		{
			printf("The radius of the round table is: 0.000\n");	
		}
	else
	{
	s=(a+b+c)/2;
		x=s*(s-a)*(s-b)*(s-c);
		at=pow(x,0.5);
		r=at/s;
		printf("The radius of the round table is: %.3lf\n",r);
	}
}
	return 0;
}
