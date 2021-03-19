#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,s,r,R,pi,A,B,C,At,Ar,AR,Y,V,Red,y,x;
	while(scanf("%lf%lf%lf",&a,&b,&c)==3)
	{
		x=-1;
		pi=acos(x);
		s=0.5*(a+b+c);
		A=(s-a);
		B=(s-b);
		C=(s-c);
		y=A*B*C*s;
		At=pow(y,0.5);
		r=At/s;
		R=(a*b*c)/(4*At);
		Ar=pi*r*r;
		AR=pi*R*R;
		Y=AR-At;
		V=At-Ar;
		Red=Ar;
		printf("%0.4lf %0.4lf %0.4lf\n",Y,V,Red);	
	}
	return 0;
}
