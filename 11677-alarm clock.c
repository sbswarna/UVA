#include<stdio.h>
int main()
{
	long long int h1,h2,m1,m2,m4,m3,d;
	while(scanf("%lld%lld%lld%lld",&h1,&m1,&h2,&m2)==4)
	{
		if(h1==0&&m1==0&&m1==0&&m2==0)
		{
			break;
		}
		else
		{
		if(h1==0)
		{
			h1=24;
		}
			
		if(h2==0)
		{
			h2=24;
		}
		
		m3=(h1*60)+m1;
	
		m4=(h2*60)+m2;
	
		d=m4-m3;
		
		if(d<0)
		{
		h2=h2+24;
		m3=(h1*60)+m1;
	
		m4=(h2*60)+m2;
		
		d=m4-m3;
			printf("%lld\n",d);	
		}
		else
		{
			d=d;
				printf("%lld\n",d);
		}
}
	}
	return 0;
}
