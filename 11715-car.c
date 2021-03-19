#include<stdio.h>
#include<math.h>
int main()
{
	double u,v,s,a,t,i,n;
	i=1;
	while(i)
	{
		scanf("%lf",&n);
		if(n==0)
		{
			break;
		}
		else if(n>=1&&n<=4)
		{
		if(n==1)	
		{
			scanf("%lf %lf %lf",&u, &v, &t);
			s=((u+v)/2)*t;
			a=(v-u)/t;
			printf("Case %.0lf: %.3lf %.3lf\n",i,s,a);
		}
		else if(n==2)
		{
			scanf("%lf %lf %lf",&u, &v, &a);
			s=(v*v-u*u)/(2*a);
			t=(v-u)/a;
			if(t<0)
			{
				t=t*-1;
				printf("Case %.0lf: %.3lf %.3lf\n",i,s,t);
			}
			else
			{
				t=t;
				printf("Case %.0lf: %.3lf %.3lf\n",i,s,t);
			}
		}
		else if(n==3)
		{
			scanf("%lf %lf %lf",&u, &a, &s);
			v=pow(((u*u)+2*a*s),0.5);
			t=(v-u)/a;
			if(t<0)
			{
				t=t*-1;
				printf("Case %.0lf: %.3lf %.3lf\n",i,v,t);
			}
			else
			{
				t=t;
				printf("Case %.0lf: %.3lf %.3lf\n",i,v,t);
			}
		}
		else if(n==4)
		{
			scanf("%lf %lf %lf",&v, &a, &s);
			u=pow(((v*v)-2*a*s),0.5);
			t=(v-u)/a;
			if(t<0)
			{
				t=t*-1;
				printf("Case %.0lf: %.3lf %.3lf\n",i,u,t);
			}
			else
			{
				t=t;
				printf("Case %.0lf: %.3lf %.3lf\n",i,u,t);
			}
		}
	}
		i++;
	}
	return 0;
}
