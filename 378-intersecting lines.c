#include<stdio.h>
#include<math.h>
int main()
{
	long long int x1,x2,x3,x4,y1,y2,y3,y4;
	double x,y,p,q,a,b,c,d,e,f,g,h;
	long long int t,i,fl,flg;
	scanf("%lld",&t);
	printf("INTERSECTING LINES OUTPUT\n");

	i=1;
	while(i<=t)
	{

		fl=0;
		flg=0;
		scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(y1!=y2)
            p=(x1-x2)/(y1-y2);
		if(y3!=y4)
		q=(x3-x4)/(y3-y4);
		a=((x1-x2)*(y2-y3))-((x2-x3)*(y1-y2));
		b=((x1-x2)*(y2-y4))-((x2-x4)*(y1-y2));
		if(p==q&&a!=0&&b!=0)
		{
			printf("NONE\n");
			fl=1;
		}
		if(a==0&&b==0)
		{
				printf("LINE\n");
				flg=1;
		}
		if(fl==0&&flg==0)
		{
			c=x1-x2;
			d=(y1-y2);
			e=(c*y1)-(d*x1);
			f=x3-x4;
			g=(y3-y4);
			h=(f*y3)-(g*x3);
			y=((d*h)-(g*e))/((d*f)-(g*c));
        if(y==-0.00)
        {
            y=0.00;
        }
			x=((c*h)-(f*e))/((d*f)-(g*c));
			if(x==-0.00)
            {
               x=0.00;
            }
			printf("POINT %.2lf %.2lf\n",x,y);
		}
		if(i==t)
		{
			printf("END OF OUTPUT\n");
		}
		i++;
	}
	return 0;
}
