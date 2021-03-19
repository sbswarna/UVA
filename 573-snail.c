#include<stdio.h>
int main()
{
	double h,k,d,u,f,distance_climbed,height_after_sliding,height_after_climbing,i,c,final;
	while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)==4)
	{
		c=0;
		if(h==0)
		{
			break;
		}
		else
		{
			k=1;
		final=u;
		if(final>h)
		{
			printf("success on day 1\n");
		}
		else
		{
		final=u-d;
			for(i=1;i;i++)
			{
			if(final>h)
			{
				k=1;
				break;
			}
			else if(final<0)
			{
				k=2;
				break;
			}
			else
			{
			
			distance_climbed=u-((u*i*f)/100);
			if(distance_climbed<0)
			{
				distance_climbed=0;
			}
			height_after_climbing=final+distance_climbed;
			
			if(height_after_climbing>h)
			{
				final=height_after_climbing;
			
				}	
				else
				{
					final=height_after_climbing-d;
				}
				c++;
			}
			}
			if(k==2)
			{
				printf("failure on day %.0lf\n",c+1);
				
			}
			else
			{
			    printf("success on day %.0lf\n",c+1);
		
			}
		}
	}
	}
	return 0;
}
