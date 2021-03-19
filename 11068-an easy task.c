#include<stdio.h>
int main()
{
	double a1,b1,c1,a2,b2,c2,x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2)==6)
	{
		if(a1==0&&b1==0&&c1==0&&a2==0&&b2==0&&c2==0)
		{
			break;
		}
		else
		{
			if(a1*b2==a2*b1)
			{
				printf("No fixed point exists.\n");
			}
			else
			{
				x=((b2*c1)-(b1*c2))/((a1*b2)-a2*b1);
				if(x==-0)
				{
					x=0;
				}
				y=((a1*c2)-(a2*c1))/((a1*b2)-a2*b1);
				if(y==-0)
				{
					y=0;
				}	
				printf("The fixed point is at %0.2lf %0.2lf.\n",x,y);
			}
		}
	}
	return 0;
}
