#include<stdio.h>
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4,x,y,p,q;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)==8)
	{
		if(x1==x2)
		{
			p=(x3+x4);
			x=p-x1;
		}
		else if(x1==x3)
		{
			p=(x2+x4);
			x=p-x1;
		}
		else if(x1==x4)
		{
			p=(x2+x3);
			x=p-x1;
		}
		else if(x2==x3)
		{
			p=(x1+x4);
			x=p-x2;
		}
		else if(x2==x4)
		{
			p=(x1+x3);
			x=p-x2;
		}
		else if(x3==x4)
		{
			p=(x2+x1);
			x=p-x3;
		}
		if(y1==y2)
		{
			q=(y3+y4);
			y=q-y1;
		}
		else if(y1==y3)
		{
			q=(y2+y4);
			y=q-y1;
		}
		else if(y1==y4)
		{
			q=(y2+y3);
			y=q-y1;
		}
		else if(y2==y3)
		{
			q=(y1+y4);
			y=q-y2;
		}
		else if(y2==y4)
		{
			q=(y1+y3);
			y=q-y2;
		}
		else if(y3==y4)
		{
			q=(y2+y1);
			y=q-y3;
		}
	
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}
