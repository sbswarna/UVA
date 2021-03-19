#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,r,s,l,t,i,p;
	scanf("%lf",&t);
	if(t<=100)
	{
	i=1;
	while(i<=t)
	{
		scanf("%lf%lf%lf",&x,&y,&r);
		p=pow((pow((x-0),2)+pow((y-0),2)),0.5);
		s=r-p;
		l=r+p;
		printf("%.2lf %.2lf\n",s,l);
		i++;
	}
}
	return 0;
}
