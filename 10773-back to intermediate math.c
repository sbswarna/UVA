#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,d,t,T,P;
	int n,i;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%f %f %f",&d,&v,&u);
		if(u<=v||d<=0||u==0||v==0)
		{
			printf("Case %d: can't determine\n",i);
		}
		else if(u>0&&v>0&&d>0)
		{
			t=d/u;
			T=d/pow((u*u-v*v),0.5);
			P=T-t;
			printf("Case %d: %.3f\n",i,P);
		}
		i++;
	}
	return 0;
}
