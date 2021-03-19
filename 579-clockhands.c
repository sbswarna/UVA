#include<stdio.h>
int main()
{
	double h,m,angle;
	char j;
	while(scanf("%lf%c%lf",&h,&j,&m)==3)
	{
		if(h<=12&&h>=1&&m<=59&&m>=0)
		{
		angle=(0.5*((60*h)+m))-(6*m);
			if(angle>180)
			{
				angle=360-angle;
				printf("%.3lf\n",angle);
			}
			else if(angle<180&&angle>=0)
			{
				printf("%.3lf\n",angle);
			}
			else if(angle<0&&angle>-180)
			{
				angle=angle*-1;
				printf("%.3lf\n",angle);
			}
			else if(angle<0&&angle<-180)
			{
				angle=360-(angle*-1);
				printf("%.3lf\n",angle);
			}
		
	}
	else if(h<=0&&m<=0)
	{
		break;
	}
	}
	return 0;
}
