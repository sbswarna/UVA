#include<stdio.h>
#include<math.h>
int main()
{
	double r,theta,pi,R,arc,chord;
	char s[5];
	while(scanf("%lf%lf%s",&r,&theta,s)!=EOF)
	{
		if(s[0]=='m')
		{
			theta=theta/60.0;
		}
		if(theta>180)
		{
			theta=360-theta;
		}
		R=r+6440;
		pi=acos(-1);
		arc=(2*pi*R*theta)/360.0;
		chord=pow((2*R*R)*(1-cos((theta*pi)/180.0)),0.5);
		printf("%.6lf %.6lf\n",arc,chord);
	}
	return 0;
}
